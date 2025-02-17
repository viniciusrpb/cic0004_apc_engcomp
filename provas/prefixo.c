#include <stdio.h>
#include <string.h>

int main(){

    int n,m,i;
    char s1[1001],s2[1001];
  
    scanf("%s", s1);
    scanf("%s", s2);
  
    n = strlen(s1);
    m = strlen(s2);
    
    i = 0;
  
    while(i < n && i < m && s1[i] == s2[i]){
        i++;
    }
  
    printf("%d\n", i);
    return 0;
}
