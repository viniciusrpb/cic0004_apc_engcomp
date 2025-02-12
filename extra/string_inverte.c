#include<stdio.h>
#define MAX_STRINGS 100
#define MAX_LEN 201

int main(){
    char vetorStrings[MAX_STRINGS][MAX_LEN];
    int i,n;
    char vetorS[4][10] = {"Ok","Alo","TesteTeste78454","Siu"};

    for(i = 0; i < 4; i++){
        printf("%s\n",vetorS[i]);
    }

    scanf("%d",&n);

    for(i = 0; i < n; i++){

        scanf("%s",vetorStrings[i]);
        getchar(); // se livra do \n
    }

    for(i = 0; i < n; i++){
        printf("%s\n",vetorStrings[i]);
    }


    return 0;
}
