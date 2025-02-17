#include <stdio.h>

#define MAX_N 100

int main() {
    int n,i,j,ans;

    scanf("%d",&n);

    char mapa[MAX_N][MAX_N];

    getchar();

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%c",&mapa[i][j]);
        }
        getchar();
    }

    ans = 1;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i != j && mapa[i][j] != mapa[j][i]){
                ans = 0;
            }
        }
    }

    if(ans == 1){
        printf("Sim\n");
    }else{
        printf("Nao\n");
    }

    return 0;
}
