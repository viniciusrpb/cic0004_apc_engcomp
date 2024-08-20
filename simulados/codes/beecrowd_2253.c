#include<stdio.h>
#define MAX_N 1000

int main(){
    int i,ans,min,mai,valid,num;
    char password[MAX_N+1];
    int hist[26];

    while(scanf("%[^\n]s",password)!=EOF){
        getchar();
        min = 0;
        mai = 0;
        num = 0;
        valid = 1;
        for(i = 0; password[i]!='\0'; i++){
            if(password[i] >= 97 && password[i] <= 122){
                min++;
            }else{
                if(password[i] >= 65 && password[i] <= 90){
                    mai++;
                }else{
                    if(password[i] >= 48 && password[i] <= 57){
                        num++;
                    }else{
                        valid = 0;
                        break;
                    }
                }
            }
        }

        if(i >= 6 && i <= 32 && min >= 1 && mai >= 1 && num >= 1 && valid){
            printf("Senha valida.\n");
        }else{
            printf("Senha invalida.\n");
        }
    }

    return 0;
}
