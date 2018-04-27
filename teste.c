#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#define FILHOS  11

int main(void){
  int n,i=0, pid;

  printf(1, "fork test\n");

  for(n=0; n<FILHOS; n++){
    //pid = fork(1);
     if(i<(FILHOS/3)){
            pid=fork(50);
        }else if(i>=(FILHOS/3) &&  i<(2*(FILHOS/3))    ){
            pid=fork(10);
        }else{
            pid=fork(20);
        }
    if(pid < 0)
      break;
    if(pid == 0)
      for(;;);
  }

  if(n == FILHOS){
    printf(1, "fork claimed to work %d times!\n", FILHOS);
    exit();
  }
}