#include <stdio.h>
 
int main() {
 
    int n;
    
    scanf("%d",&n);
    
    if(n > 85){
        printf("A\n");
    } else if(n > 60){
        printf("B\n");
    } else if(n > 35){
        printf("C\n");
    } else if(n > 1){
        printf("D\n");
    } else {
        printf("E\n");
    }
    
    return 0;
}
