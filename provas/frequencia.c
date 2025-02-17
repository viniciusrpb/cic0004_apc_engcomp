#include <stdio.h>
 
int main() {
 
    int freq[200002];
    int ans,i,n,a;
    
    scanf("%d",&n);
    
    for(i = 0; i <= 200002; i++){
        freq[i] = 0;
    }
    
    ans = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d",&a);
        freq[a]++;
        if(freq[a] == 1){
            ans++;
        }
    }
    
    printf("%d\n",ans);
 
    return 0;
}
