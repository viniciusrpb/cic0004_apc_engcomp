#include <stdio.h>

int main() {

    int t,d,i,j,ing,b,idx,q,a,menor,bolo;
    int prices[100];

    scanf("%d",&t);
  
    while(t>0){
      
        scanf("%d %d %d",&d,&ing,&b);
      
        for(i = 0; i < ing; i++){
            scanf("%d",&prices[i]);
        }
      
        // 10^9+1, um valor bem grande para que os valores menores
        // a serem encontrados no laco abaixo o substituam
        menor = 1000000001; 
      
        for(i = 0; i < b; i++){
            scanf("%d",&q);
            bolo = 0;
            for(j = 0; j < q; j++){
                scanf("%d %d",&idx,&a);
                bolo+=prices[idx]*a;
            }
            if(bolo < menor){
                menor = bolo;
            }
        }
        printf("%d\n",d/menor);

        t--;
    }

    return 0;
}
