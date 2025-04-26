#include<stdio.h>

int main(){
    
    int n,la,lb,sa,sb;
    
    scanf("%d",&n);
    scanf("%d %d",&la,&lb);
    scanf("%d %d",&sa,&sb);
    
    if(n >= la && n <= lb && n >= sa && n <= sb){
        printf("possivel\n");
    } else {
        printf("impossivel\n");
    } 
    
    return 0;
}
