#include<stdio.h>

int fib(int n, int *c){
    int ans,calls_f1,calls_f2;
    if(n == 0){
        *c = 1;
        return 0;
    }

    if(n == 1){
        *c = 1;
        return 1;
    }
    ans = fib(n-1,&calls_f1) + fib(n-2,&calls_f2);
    *c = calls_f1 + calls_f2+1;
    return ans;
}

int main(){
    int t,x,calls,f;
    scanf("%d",&t);
    while(t > 0){
        scanf("%d",&x);
        f = fib(x,&calls);
        printf("fib(%d) = %d calls = %d\n",x,calls-1,f);
        t--;
    }
    return 0;
}
