#include<stdio.h>
#define MAX_N 11

void sort2(int v[MAX_N], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

char solve(int a, int d){
    int i,j,num;
    int atacantes[MAX_N];
    int defensores[MAX_N];
    
    for(i = 0; i < a; i++){
        scanf("%d",&atacantes[i]);
    }
    
    for(i = 0; i < d; i++){
        scanf("%d",&defensores[i]);
    }
    
    sort2(atacantes,a);
    sort2(defensores,d);
    
    for(i = 0; i < a; i++){
        num = 0;
        j = 0;
        while(j <= d && atacantes[i] >= defensores[j]){
            j++;
        }
        if(j<2){
            return 'Y';
        }
    }
    return 'N';
}

int main(){

    int a,d;
    char ans;
    
    scanf("%d %d",&a,&d);
    
    while(a != 0 && d != 0){
        ans = solve(a,d);
        printf("%c\n",ans);
        scanf("%d %d",&a,&d);
    }
    
    return 0;
}
