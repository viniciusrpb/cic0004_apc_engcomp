#include<stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int max(int a, int b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main(){
    int a,b,c,custo1,custo2,custo3,ans;

    scanf("%d %d %d",&a,&b,&c);

    custo1 = 2*b + 4*c;
    custo2 = 2*a + 2*c;
    custo3 = 4*a + 2*b;

    ans = min(custo1,min(custo2,custo3));

    printf("%d\n",ans);

    return 0;
}
