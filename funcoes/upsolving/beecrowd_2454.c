#include <stdio.h>
 
int main() {
 
    int p1,p2;
    
    scanf("%d %d",&p1,&p2);
    
    if(p1 == 0){
        printf("C\n");
    }else if(p1 == 1 && p2 == 0){
        printf("B\n");
    }else{
        printf("A\n");
    }
 
    return 0;
}
