#include <stdio.h>

int min(int x, int y){
    if(x < y){
        return x;
    } else {
        return y;
    }
}
 
int main() {
 
    int a,b,c,ans;
    
    scanf("%d %d %d",&a,&b,&c);
    
    ans = min(min((a/2),(b/3)),(c/5));
 
    printf("%d\n",ans);
 
    return 0;
}
