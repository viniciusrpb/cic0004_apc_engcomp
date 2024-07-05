#include<stdio.h>
#define MAX_N 10000

int main(){
    int c,i,n,ascii;
    //string pode ter ateh 10000 caracteres + '\0'
    char str[MAX_N+1];

    scanf("%d\n",&c);

    while(c != 0){
        // ler a string
        scanf("%s",str);

        // determina o comprimento da string
        n = 0;
        while(str[n]!='\0'){
            n++;
        }

        for(i = n-1; i >= 0; i--){
            //pega codigo ascii do carac s[i]
            ascii = str[i];
            // se o caractere str[i] eh minusculo
            // 97 eh o codigo ascii do 'a'
            // 122 eh o codigo ascii do 'z'
            if(ascii >= 97 && ascii <= 122){
                printf("%c",str[i]);
            }
        }
        printf("\n");

        c--;
    }

    return 0;
}
