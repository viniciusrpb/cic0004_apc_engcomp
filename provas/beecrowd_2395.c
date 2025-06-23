#include<stdio.h>

int main(){
    int ans,a,b,c,x,y,z;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&x,&y,&z);

    ans = (x/a)*(y/b)*(z/c);

    printf("%d\n",ans);

    return 0;
}
