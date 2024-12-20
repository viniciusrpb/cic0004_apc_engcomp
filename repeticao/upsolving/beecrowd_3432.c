#include <stdio.h>

char solve(){
    int i,b;
    
    for(i = 0; i < 8; i++){
        scanf("%d",&b);
        if(b == 9){
            return 'F';
        }
    }
    return 'S';
}

int main(){

    char ans;

    ans = solve();

    printf("%c\n",ans);
  
    return 0;
}
