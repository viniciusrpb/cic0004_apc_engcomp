#include<stdio.h>
#define MAX_N 10000

int main(){
    int i,n,m,ticket_festa,fake;
    int tickets[MAX_N+1];

    scanf("%d %d",&n,&m);

    while(n != 0 && m != 0){

        // inicializar o vetor com zeros
        for(i = 1; i <= n; i++){
            tickets[i] = 0;
        }

        for(i = 0; i < m; i++){
            scanf("%d",&ticket_festa);
            tickets[ticket_festa]++;
            /*if(ticket_festa >= 1 && ticket_festa <= n){
                tickets[ticket_festa]++;
            }*/
        }
        fake = 0;
        for(i = 1; i <= n; i++){
            if(tickets[i] > 1){
                fake++;
            }
        }

        printf("%d\n",fake);
        scanf("%d %d",&n,&m);
    }

    return 0;
}
