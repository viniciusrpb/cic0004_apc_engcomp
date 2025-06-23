#include<stdio.h>

int main(){
    int ans,xm,ym,xr,yr,px,py;

    scanf("%d %d",&xm,&ym);
    scanf("%d %d",&xr,&yr);

    px = xm-xr;

    if(px < 0){
        px = px*(-1);
    }

    py = ym-yr;

    if(py < 0){
        py = py*(-1);
    }

    ans = px + py;
    printf("%d\n",ans);

    return 0;
}
