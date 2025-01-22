#include<stdio.h>

void zeraHistograma(int histograma[10]){
    int i;
    for(i = 1; i <= 9; i++){
        histograma[i] = 0;
    }
}

int ehValido(int histograma[10]){
    int i;
    for(i = 1; i <= 9; i++){
        // procura pelo histograma invalido
        if(histograma[i] != 1){
            return 0;
        }
    }
    return 1; // histograma valido
}

int solve(){
    int i,j,x,y,num;
    int sudoku[9][9];
    int histograma[10];

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d",&sudoku[i][j]);
        }
    }

    // para cada linha
    for(i = 0; i < 9; i++){
        zeraHistograma(histograma);
        // passa por cada coluna
        for(j = 0; j < 9; j++){
            num = sudoku[i][j];
            histograma[num]++;
        }
        if(ehValido(histograma) == 0){
            return 0;//
        }
    }

    // para cada coluna
    for(j = 0; j < 9; j++){
        zeraHistograma(histograma);
        // passa por cada linha
        for(i = 0; i < 9; i++){
            num = sudoku[i][j];
            histograma[num]++;
        }
        if(ehValido(histograma) == 0){
            return 0;// histograma invalido
        }
    }

    for(i = 0; i < 9; i = i+3){
        for(j = 0; j < 9; j=j+3){

            zeraHistograma(histograma);
            //p/ cada linha do quadrante
            for(x = i; x < i+3; x++){
                for(y = j; y < j+3; y++){
                    num = sudoku[x][y];
                    histograma[num]++;
                }
            }

            if(ehValido(histograma) == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int t,teste,ans;

    scanf("%d",&t);
    teste = 1;

    while(t > 0){
        ans = solve();
        printf("Instancia %d\n",teste);
        if(ans == 1){
            printf("SIM\n\n");
        }
        else{
            printf("NAO\n\n");
        }
        t--;
        teste++;
    }
    return 0;
}
