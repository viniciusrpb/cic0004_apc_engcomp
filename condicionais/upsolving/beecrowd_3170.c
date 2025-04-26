#include<stdio.h>

int main(){
    
    int b,g;
    
    scanf("%d",&b);
    
    scanf("%d",&g);
    
    if(g%2 != 0){
        g = g-1;
    }
    
    if(b >= g/2){
        printf("Amelia tem todas bolinhas!\n");
    } else {
        printf("Faltam %d bolinha(s)\n",g/2-b);
    } 
    
    return 0;
}
