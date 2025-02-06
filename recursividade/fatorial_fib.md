# Fatorial

```
#include<stdio.h>

long long fatorial(long long n){
    if(n == 1){
        return 1;
    }
    return n*fatorial(n-1);
}

int main(){
    long long n;
    scanf("%lld",&n);

    printf("%lld! = %lld\n",n,fatorial(n));

    return 0;
}
```

# Fibonacci

```
#include<stdio.h>

long long fibonacci(long long n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}

int main(){
    long long n;
    scanf("%lld",&n);

    printf("%lld\n",fibonacci(n));

    return 0;
}
```
