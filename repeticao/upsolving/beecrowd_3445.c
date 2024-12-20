/*
Universidade de Brasília
Departamento de Ciência da Computação
CIC0004 - Algoritmos e Programação de Computadores
Prof. Dr. Vinícius R. P. Borges

Tópico: Estruturas de Repeticao
Objetivo: Solução do problema beecrowd 3445 - Daily Trips (ICPC South America Finals - Maratona SBC de Programação, 2022)
          https://www.beecrowd.com.br/judge/pt/problems/view/3445

Comandos no Terminal do Linux para compilar e executar o codigo-fonte:

gcc beecrowd_3445.c -o trips
./trips
*/

#include <stdio.h>

int main(){
    
    int n,i,h,w;
    char c1,c2;
    
    scanf("%d %d %d\n",&n,&h,&w);
    
    for(i = 0; i < n; i++){
      
        scanf("%c %c\n",&c1,&c2);

        // se estah chovendo em casa
        if(c1 == 'Y'){
            // se tem guarda chuva em casa
            if(h>0){
                printf("Y");
                
                // atualiza os valores de guarda chuva em casa e no escritorio
                h--;
                w++;
            }
            else{
                // se nao tiver guarda chuva em casa, sai sem guarda chuva
                printf("N");
            }
        }
        else{
            // se nao estah chovendo em casa
            
            // se este nao tiver nenhum guarda chuva no trabalho, ela leva um guarda chuva por precaucao
            if(w == 0 && h > 0){
                // atualiza os valores de guarda chuva em casa e no escritorio
                h--;
                w++;
                printf("Y");
            }
            else{
                // se tem guarda chuva no trabalho, ela nao leva guarda para o trabalho
                printf("N");
            }
        }

        // se estah chovendo no escritorio
        if(c2 == 'Y'){

            // se tem guarda chuva no escrito, ela leva o guarda chuva para casa
            if(w > 0){
                printf(" Y\n");
                // em seguida, atualiza os valores de guarda chuva em cada local
                w--;
                h++;
            }
            else{
                // se nao tem guarda chuva no escrito, ela vai sem guarda chuva para casa
                printf(" N\n");
            }
        }
        else{
            // se nao estah chovendo no escritorio
            
            // verifica se ela leva um guarda chuva do escritorio
            // para casa caso na sua casa nao tenha nenhum
            if(h == 0 && w > 0){
                // atualiza os valores de guarda chuva em cada local
                h++;
                w--;
                printf(" Y\n");
            }
            else{
                // se tem guarda chuva em casa, ela nao leva guarda do trabalho
                printf(" N\n");
            }
        }
    }
    
    return 0;
}
