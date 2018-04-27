#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"


#define VALOR 1         
#define FILHOS 10   
//#define NUMEROGRANDE 987655432

void loop(int p){
    double i, j;

    for(i = 0; i < 100; i++)
        for(j=0; j < 100; j++);

    //printf(1, "%d\n", p);
}

void meuprograma(){

    int pid;
    int i;
    for (i=0;i<FILHOS;i++){
        if(i<(FILHOS/3)){
            pid=fork(50);
        }else if(i>=(FILHOS/3) &&  i<(2*(FILHOS/3))    ){
            pid=fork(10);
        }else{
            pid=fork(20);
        }if(pid == 0){
            exit();
        }
        
    }
    
    while(1){
        wait();
        if(pid<0)break;
        //printf(VALOR,"Filho %d Terminou!\n",pid );
        
    }
    
    
    exit();
}