#include<stdio.h>

int main(){
    int i,n,i_ant,ans,padrao;
    int wave[10002];
    
    scanf("%d",&n);
    
    while(n!=0){
        
        for(i = 0; i < n; i++){
            scanf("%d",&wave[i]);
        }

        // completa o loop no vetor para tratar os casos de borda
        wave[n] = wave[0];
        wave[n+1] = wave[1];
        
        // atualiza a quantidade de elementos do vetor, desconsiderando o segundo
        n++;
        
        if(wave[0] > wave[1]){
            // padrao decrescente da onda
            padrao = 0;
        }else{
            // padrao crescente da onda
            padrao = 1;
        }

        ans = 0;
        
        for(i = 1; i < n; i++){
            // sinal da onda eh crescente
            if(wave[i+1] > wave[i]){
                // mas o padrao anterior era decrescente, detecta-se pico
                if(padrao == 0){
                    ans++;
                    // muda o padrao para crescente
                    padrao = 1;
                }
            }else{
                // sinal da onda eh decrescente
                if(wave[i+1] < wave[i]){
                    // mas o padrao anterior era crescente, detecta-se pico
                    if(padrao == 1){
                        ans++;
                        // muda o padrao para crescente
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
