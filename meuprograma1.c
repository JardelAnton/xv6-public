#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#define FILHOS  20

int main(void){
  int n, pid;
  for(n=0; n<FILHOS; n++){
     if(n<(FILHOS/3)){
            pid=fork(5);
            printf(1,"%d tickets\n", 5);
        }else if(n>=(FILHOS/3) &&  n<(2*(FILHOS/3))    ){
            pid=fork(10);
            printf(1,"%d tickets\n", 10);
        }else{
            pid=fork(20);
            printf(1,"%d tickets\n", 20);
        }
    if(pid < 0)
      break;
    if(pid == 0){
      for(;;);
    }
  }
  if(n == FILHOS){
    printf(1, "fork claimed to work %d times!\n", FILHOS);
    exit();
  }
}