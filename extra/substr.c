#include<stdio.h>
#include<string.h>
// verifica se str2 esta contida em str1
int substr(char str1[35], char str2[35]){
    int i,j,k,n,m,ans;

    n = strlen(str1);
    m = strlen(str2);

    // assume que n > m
    ans = 0;
    for(i = 0; i < n; i++){
        if(str1[i] == str2[0]){
            k = i+1;
            j = 1;
            while(j < m && k < n && str1[k] == str2[j]){
                k++;
                j++;
            }
            if(j == m){
                ans++;
            }
        }
    }
    return ans;
}

int main(){
    int i,n,j;
    char str1[35],str2[35];

    scanf("%s %s",str1,str2);

    printf("%d\n",substr(str1,str2));

    return 0;
}
