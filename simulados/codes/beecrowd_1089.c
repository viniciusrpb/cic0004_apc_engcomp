#include<stdio.h>

int main(){
    int i,n,i_ant,ans,padrao;
    int wave[10002];
    
    scanf("%d",&n);
    
    while(n!=0){
        
        for(i = 0; i < n; i++){
            scanf("%d",&wave[i]);
        }
        
        ans = 0;
        wave[n] = wave[0];
        wave[n+1] = wave[1];
        n++;
        
        if(wave[0] > wave[1]){
            padrao = 0;
        }else{
            padrao = 1;
        }
        
        //printf("padrao: %d\n",padrao);
        
        for(i = 1; i < n; i++){
            if(wave[i+1] > wave[i]){
                if(padrao == 0){
                    //printf("pico: %d\n",i);
                    ans++;
                    padrao = 1;
                }
            }else{
                if(wave[i+1] < wave[i]){
                    if(padrao == 1){
                        //printf("pico: %d\n",i);
                        ans++;
                        padrao = 0;
                    }
                }
            }
        }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
    return 0;
}
