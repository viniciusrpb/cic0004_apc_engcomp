#include<stdio.h>
#include<string.h>

void solve(char codificada[51], char original[51], int shift){
    int i,n;
    n = strlen(codificada);

    for(i = 0; i < n; i++){
        if(codificada[i]-shift < 65){
            original[i] = codificada[i]-shift+26;
        } else {
            original[i] = codificada[i]-shift;
        }
    }
    original[i] = '\0';
}

int main(){
    char str_codificada[51],str_original[51]; //max 50 caracteres + '\0'
    int shift,n;

    scanf("%d",&n);

    while(n > 0){
        scanf("%s",str_codificada);
        scanf("%d",&shift);
        getchar(); // tchau '\n'

        solve(str_codificada,str_original,shift);
        printf("%s\n",str_original);
        n--;
    }

    return 0;
}




