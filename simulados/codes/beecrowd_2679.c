#include <stdio.h>
 
int main() {
 
    int x;
    
    scanf("%d",&x);
    
    if(x % 2 == 0){
        x = x+2;
    }
    else{
        x = x+1;
    }
 
    printf("%d\n",x);
    return 0;
}
