#include<stdio.h>

int main(){
    int n,i,j,k,l,num,teste,lascou;
    int sudoku[9][9];
    int histograma[10]; //ind 0 eh esquecido

    scanf("%d",&n);

    teste = 1;

    while(n > 0){

        for(i = 0; i < 9; i++){
            for(j = 0; j < 9; j++){
                scanf("%d",&sudoku[i][j]);
            }
        }

        // assume que o sudoku estah correto
        lascou = 0;

        // restricao 1
        // para cada linha do sudoku
        for(i = 0; i < 9; i++){

            // zerar o histograma
            for(k = 1; k <= 9; k++){
                histograma[k] = 0;
            }

            // contabilizar os numeros de cada coluna do sudoku no histograma
            for(j = 0; j < 9; j++){
                num = sudoku[i][j];
                histograma[num]++;
            }

            // verifica se faltou algum numero ou
            // se num aparece mais do que 1 vez
            for(k = 1; k <= 9; k++){
                if(histograma[k] != 1){
                    lascou = 1; // sudoku invalido
                }
            }
        }

        // para cada coluna do sudoku
        for(j = 0; j < 9; j++){

            // zerar o histograma
            for(k = 1; k <= 9; k++){
                histograma[k] = 0;
            }

            // contabilizar os numeros de cada linha do sudoku no histograma
            for(i = 0; i < 9; i++){
                num = sudoku[i][j];
                histograma[num]++;
            }

            // verifica se faltou algum numero ou
            // se num aparece mais do que 1 vez
            for(k = 1; k <= 9; k++){
                if(histograma[k] != 1){
                    lascou = 1; // sudoku invalido
                }
            }
        }

        for(i = 1; i < 9; i=i+3){
            for(j = 1; j < 9; j=j+3){

                for(k = 1; k <= 9; k++){
                    histograma[k] = 0;
                }

                for(k = i-1; k <= i+1; k++){
                    for(l = j-1; l <= j+1; l++){
                        num = sudoku[k][l];
                        histograma[num]++;
                    }
                }

                for(k = 1; k <= 9; k++){
                    if(histograma[k] != 1){
                        lascou = 1; // sudoku invalido
                    }
                }

            }
        }
        printf("Instancia %d\n",teste);
        if(lascou == 1){
            printf("NAO\n\n");
        }else{
            printf("SIM\n\n");
        }

        n--; // n = n-1
        teste++;
    }
    return 0;
}
