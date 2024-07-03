#include<stdio.h>
#include<string.h>
#define MAX_N 101

int main(){
    int i,n,leds,t,d;
    char number[MAX_N+1]; // +1 eh o '\0'
    // qtde de leds para cada digito
    int digitos[10] = {6,2,5,5,4,5,6,3,7,6};

    scanf("%d",&t);
    getchar();
    while(t > 0){

        scanf("%s",number);
        getchar();
        // pega o tamanho da string
        n = strlen(number);
        // leitura de digito por digito
        leds = 0;
        for(i = 0; i < n;i++){
            // converte o caractere numerico para inteiro
            d = number[i]-48;
            // soma os leds do digito d na resposta
            leds = leds + digitos[d];
        }
        printf("%d leds\n",leds);
        t--;
    }
    return 0;
}
