#include<stdio.h>
#define MAX 501

int isLower(char c){
    if(c >= 97 && c <= 122){
        return 1; // sim eh minusculo
    }
    else{
        return 0;
    }
}

int isUpper(char c){
    if(c >= 65 && c <= 90){
        return 1; // eh maiusculo
    }
    else{
        return 0;
    }
}
// converte c para minusculo, caso c seja maisculo
char toLower(char c){
    if(isUpper(c) == 1){
        return c + 32;
    }
    else{
        return c;
    }
}

// converte c para maiusculo, caso c seja minusculo
char toUpper(char c){
    if(isLower(c) == 1){
        return c - 32;
    }
    else{
        return c; // retorna c, pois ele jah eh maisculo
    }
}

int main(){
    int i,j,n;
    char str[MAX],minus[MAX];
    // leitura da string
    // ateh encontrarmos um espaco em branco (' '), ou uma tabulacao ('\t'), ou quebra de linha ('\n')
    scanf("%s",str);
    // permite-se capturar os espacos em branco
    //scanf("%[^\n]",str);
    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    n = i;
    printf("Tamanho da String: %d\n",n);

    for(i = 0; i < n; i++){
        if(isLower(str[i])==1){
            printf("%c",toUpper(str[i]));
        }
        else{
            if(isUpper(str[i]) == 1){
                printf("%c",toLower(str[i]));
            }
            else{
                printf("%c",str[i]);
            }
        }
    }
    printf("\n");

    /*
    j = 0;
    for(i = 0; i < n; i++){
        if(isLower(str[i]) == 1){
            minus[j] = str[i];
            j++;
        }
    }
    minus[j] = '\0';
    printf("String de minusculos: %s\nTamanho: %d\n",minus,j);

    */
    return 0;
}
