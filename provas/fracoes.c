#include<stdio.h>

int main(){
    int baixo,cima,a,b,c,d,i;
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
        
    baixo = b*d;
    
    cima = a*(baixo/b) + c*(baixo/d);
    
    for(i = 2; i <= baixo; i++){
        
        while(cima > 1 && cima % i == 0 && baixo % i == 0){
            cima = cima / i;
            baixo = baixo / i;
        }
        
    }
        
    printf("%d %d\n",cima,baixo);
        
    return 0;
}
