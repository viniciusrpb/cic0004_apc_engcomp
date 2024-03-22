#include<stdio.h>

int main(){
    int a,b,resto;

    scanf("%d",&a);
    scanf("%d",&b);

    if(b == 0){
        printf("Nao\n");
    }else{
        resto = a%b;
        if(resto == 0){
            printf("Sim\n");
        }else{
            printf("Nao\n");
        }
    }

    return 0;
}
