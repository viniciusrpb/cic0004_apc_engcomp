# 4.3. Estrutura Switch-Case

```
#include <stdio.h>

int main() {
    int a,b,ans;
    char op;

    scanf("%d %c %d",&a,&op,&b);

    switch(op) {
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
        default:
            ans = -1;
            break;
    }

    printf("%d\n", ans);
    return 0;
}
```
