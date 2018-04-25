#include "types.h"      
#include "user.h"       

#define VALOR 1         
#define FILHOS 10	
#define NUMEROGRANDE 987655432

//void testedosbilhetes(){
  //  int i=NUMEROGRANDE;
    //while(i--){}
    //i=NUMEROGRANDE; 
    //while(i--){}
//}

int meuprograma(){
    int pid;
    int i;
    for (i=0;i<FILHOS;i++){
        if(i<(FILHOS/3)){
            pid=fork(10);
        }else if(i>=(FILHOS/3) &&  i<(2*(FILHOS/3))    ){
            pid=fork(10);
        }else{
            pid=fork(20);
        }if(pid == 0){
            //testedosbilhetes();
            exit();
        }
        
    }
    //while (wait() != -1);
    while(1){
        pid=wait();
        if(pid<0)break;
        //printf(VALOR,"Filho %d Terminou!\n",pid );
        
    }
    
    
    exit();
}
