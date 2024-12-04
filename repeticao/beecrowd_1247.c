#include<stdio.h>
#include<math.h>

char solve(double d, double vf, double vg){
    double x,tg,tf;
    x = sqrt(d*d + 144);
    tg = x/vg;
    tf = 12/vf;
    // se a guarda costeira chegar
    // antes ao limite de aguas intern.;
    if(tg <= tf){
        return 'S';
    }
    else{
        return 'N';
    }
}


int main(){
    int r,d,vf,vg;
    char ans;

    r = scanf("%d %d %d",&d,&vf,&vg);
    printf("%d\n",tg);
    while(r != -1){
        ans = solve(d,vf,vg);
        printf("%c\n",ans);
        r = scanf("%d %d %d",&d,&vf,&vg);
    }

    return 0;
}
