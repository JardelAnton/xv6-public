#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#define FILHOS  10


void loop(int p){
    double i, j;

    for(i = 0; i < 10000; i++)
        for(j=0; j < 10000; j++);

    printf(1, "Terminou %d\n", p);
}

int main(void){
    int p[10];


    p[0] = fork(1);
    printf(1,"%d tickets\n", 1);
    if(p[0] == 0){
        loop(0);
        exit();
    }
        
    p[1] = fork(10);
    printf(1,"%d tickets\n", 10);
    if(p[1] == 0){
        loop(1);
        exit();
    }
        
    p[2] = fork(15);
    printf(1,"%d tickets\n", 15);
    if(p[2] == 0){
        loop(2);
        exit();
    }   
    
    p[3] = fork(20);
    printf(1,"%d tickets\n", 20);
    if(p[3] == 0){
        loop(3);
        exit(); 
    }

    p[4] = fork(50);
    printf(1,"%d tickets\n", 25);
    if(p[4] == 0){
        loop(4);
        exit();
    }   
    p[5] = fork(1);
    printf(1,"%d tickets\n", 5);
    if(p[5] == 0){
        loop(5);
        exit();
    }   
    p[6] = fork(17);
    printf(1,"%d tickets\n", 17);
    if(p[6] == 0){
        loop(6);
        exit();
    }   
    p[7] = fork(7);
    printf(1,"%d tickets\n", 7);
    if(p[7] == 0){
        loop(7);
        exit();
    }   
    p[8] = fork(23);
    printf(1,"%d tickets\n", 23);
    if(p[8] == 0){
        loop(8);
        exit();
    }  
    p[9] = fork(50);
    printf(1,"%d tickets\n", 25);
    if(p[9] == 0){
        loop(9);
        exit();
    }    
    
    wait();
    wait();
    wait(); 
    wait();
    wait(); 
    wait();
    wait();
    wait(); 
    wait();
    wait(); 
    
    exit();

return 0;
}
