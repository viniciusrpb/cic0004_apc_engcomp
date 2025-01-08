#include<stdio.h>
#define MAX_N 10000

int solve(int n, int m){
    int i,t,falsos;
    int tickets[MAX_N]; // histograma p/ fazer contagem

    for(i = 0; i < n; i++){
        tickets[i] = 0;
    }

    for(i = 0; i < m; i++){
        scanf("%d",&t);
        tickets[t-1]++;
    }

    falsos = 0;

    for(i = 0; i < n; i++){
        //printf("%d ",tickets[i]);
        if(tickets[i] > 1){
            falsos++;
        }
    }
    //printf("\n");

    return falsos;
}

int main(){

    int n,m,ans;

    scanf("%d %d",&n,&m);

    while(n != 0 && m != 0){
        ans = solve(n,m);
        printf("%d\n",ans);
        scanf("%d %d",&n,&m);
    }
    return 0;
}
