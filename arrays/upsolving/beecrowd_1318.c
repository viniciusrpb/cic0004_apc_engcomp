#include<stdio.h>

int solve(int n, int m){
    int i,t,falsos;
    int tickets[10000];

    for(i = 0; i < n; i++){
        tickets[i] = 0;
    }

    for(i = 0; i < m; i++){
        scanf("%d",&t);
        tickets[t-1]++;
    }

    falsos = 0;

    for(i = 0; i < n; i++){
        if(tickets[i] > 1){
            falsos++;
        }
    }

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
