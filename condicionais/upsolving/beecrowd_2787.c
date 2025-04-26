#include<stdio.h>

int main(){
    
    int l,c;
    
    scanf("%d",&l);
    scanf("%d",&c);
    
    if(l % 2 != 0){
        if(c % 2 != 0){
            printf("1\n");
        } else {
            printf("0\n");
        } 
    } else {
        if(c % 2 != 0){
            printf("0\n");
        } else {
            printf("1\n");
        } 
    } 
    
    return 0;
}
