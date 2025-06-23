#include<stdio.h>

int main(){

    int i,ans,n,k,p;
    int lista[101];

    scanf("%d %d",&n,&k);
    while(n != 0 && k != 0){

        for(i = 0; i <= 100; i++){
            lista[i] = 0;
        }

        for(i = 0; i < n; i++){
            scanf("%d",&p);
            lista[p]++;
        }

        ans = 0;
        for(i = 1; i <= 100; i++){
            if(lista[i] >= k){
                ans++;
            }
        }
        printf("%d\n",ans);
        scanf("%d %d",&n,&k);
    }

    return 0;
}
