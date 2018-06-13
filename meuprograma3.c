#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"



void loop(int p){
    double i, j;

    for(i = 0; i < 10000; i++)
        for(j=0; j < 100000; j++);

    printf(1, "Terminou %d\n", p);
}

int main(void){
    int p[10];

    p[0] = fork(10);
    printf(1,"%d tickets\n", 10);
    if(p[0] == 0){
        //sleep(100);
        loop(0);
        exit();
    }
        
    p[1] = fork(5);
    printf(1,"%d tickets\n", 5);
    if(p[1] == 0){
        //sleep(100);
        loop(1);
        exit();
    }
        
    p[2] = fork(25);
    printf(1,"%d tickets\n", 25);
    if(p[2] == 0){
        loop(2);
        exit();
    }   
    
    wait();
    wait();
    wait(); 
    
    exit();

return 0;
}
