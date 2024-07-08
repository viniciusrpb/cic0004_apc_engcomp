#include<stdio.h>
#define MAX_N 100

int main(){
    int i,j,n,m;
    // matriz eh quadrada
    int matriz[MAX_N][MAX_N];

    scanf("%d",&n);

    while(n!=0){

        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(j >= i){
                    // j sempre maior que j
                    matriz[i][j] = j-i+1;
                }else{
                    // i sempre maior que j
                    matriz[i][j] = i-j+1;
                }
            }
        }

        for(i = 0; i < n; i++){
            for(j = 0; j < n-1; j++){
                printf("%3d ",matriz[i][j]);
            }
            printf("%3d\n",matriz[i][n-1]);
        }
        printf("\n");
        scanf("%d",&n);
    }

    return 0;
}
