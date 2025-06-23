#include<stdio.h>
 
int main() {
    int i, ans;
    char transcricao[1001];
 
    scanf("%[^\n]", transcricao);
 
    ans = 0;
 
    for (i = 0; transcricao[i] != '\0'; i++) { 
        if (transcricao[i] >= 'A' && transcricao[i] <= 'Z') {
            ans += 3;
        } else if (transcricao[i] >= 'a' && transcricao[i] <= 'z') {
            ans += 1;
        } else if (transcricao[i] >= '0' && transcricao[i] <= '9') {
            ans += 2;
        }
    }
 
    printf("%d\n", ans);
 
    return 0;
}
