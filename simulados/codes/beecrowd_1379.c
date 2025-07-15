#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d %d",&a,&b);

    while(a != 0 && b != 0){

        c = 2*a - b;

        printf("%d\n",c);

        scanf("%d %d",&a,&b);
    }

    return 0;
}
