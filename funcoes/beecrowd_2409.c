#include<stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int max(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a,b,c,h,l;
    int maior_h,menor_h,maior_c,menor_c,meio;
    
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d",&h,&l);
    
    maior_c = max(a,max(b,c));
    menor_c = min(a,min(b,c));
    
    meio = (a+b+c)-(maior_c+menor_c);
    
    maior_h = max(h,l);
    menor_h = min(h,l);
    
    if(maior_h >= meio && menor_h >= menor_c){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    
    return 0;
}
