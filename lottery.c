#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 5
#define MAX 25
int v_tickets[100]; // para distribuição, armazena aos pids
int v_l_tickets[100]; // pids Runnable para realizar ao sorteio
int v_est[100];
int last =0;

void distribute_tickets(int t, int pid);
void remove_tickets(int t);
void lottery_tickets();
void menu(int t){
    int pid,i;
    if(t ==1){
        while(t){
            printf("insira t tickets e o pid\n");
            scanf("%d",&t);
            scanf("%d",&pid);
            if(t!=0)
                distribute_tickets(t,pid);
            
            for(i=0; i< last; i++){
                printf("[%d] ",v_tickets[i]);
            }
        }
    }else if(t ==2){
        while(t!=-1){
            printf("insira o t ticket a ser removido");
            scanf("%d",&t);
            remove_tickets(t);
            for(i=0; i< last; i++){
                printf("[%d] ",v_tickets[i]);
            }
        }
    }else if(t==3){
        lottery_tickets();
    }
}

int main(){
    int m=1;
    while(m){
        printf("menu");
        scanf("%d",&m);
        menu(m);
    }
    
}

void distribute_tickets(int t, int pid){
    if(t < MIN){//eu defino que esse é o minimo
        t = MIN;
    }else if(t > MAX){
            t = MAX;
    }
    int x, y;
    for(x = 0; x < last+1; x++){
        if(v_tickets[x] == 0 && t > 0){
            t--;
            if(x == last)
                last++;
            v_tickets[x] = pid;
        }
    }
    //falta o teste de quando o vetor está cheio
    //quando last estiver proximo a 100, insere mais, irá passar de 100, então para em 100
    
}

void remove_tickets(int pid){
    int a,c;
    for(a = 0; a < last; a++){
        if(v_tickets[a]!=pid){//terá de haver um teste if(v_tickts[a] == RUNNABLE)
           v_tickets[a] = 0;
        }
    }
    v_tickets[t]=0;
    
}

void lottery_tickets(){
    int a,b,c;
    for(a = 0, c = 0; a < last; a++){
        if(v_tickets[a]!=0){//terá de haver um teste if(v_tickts[a] == RUNNABLE)
            v_l_tickets[b] = v_tickets[a];
            c++;
        }
    }
    srand (time(NULL));
    while(a < 1000000){
        a++;
         b =rand()%c;
        v_est[b]++;
    }
    for(a=0;a<100;a++){
        printf("[%d - %d]\n",a,v_est[a]);
    }
}
