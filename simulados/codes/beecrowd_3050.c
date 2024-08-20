#include<stdio.h>

int main(){
    int aux,n,i,dist,maxdist,k;
    int predios[200000];

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&predios[i]);
    }
    
    k = predios[0];
    maxdist = predios[0] + 1;
    for(i = 1; i < n; i++){
        if(predios[i] + i + k > maxdist){
            maxdist = predios[i] + i + k;
        }

        if(k < predios[i] - i){
            k = predios[i] - i;
        }
    }
    
    printf("%d\n",maxdist);

    return 0;
}
