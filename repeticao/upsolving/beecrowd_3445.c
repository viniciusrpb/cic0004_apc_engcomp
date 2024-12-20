#include <stdio.h>

int main(){
    
    int n,i,h,w;
    char c1,c2;
    
    scanf("%d %d %d\n",&n,&h,&w);
    
    for(i = 0; i < n; i++){
      
        scanf("%c %c\n",&c1,&c2);
      
        if(c1 == 'Y'){
            if(h>0){
                printf("Y");
                h--;
                w++;
            }
            else{
                printf("N");
            }
        }
        else{
            if(w == 0 && h > 0){
                h--;
                w++;
                printf("Y");
            }
            else{
                printf("N");
            }
        }

        if(c2 == 'Y'){
            if(w > 0){
                printf(" Y\n");
                w--;
                h++;
            }
            else{
                printf(" N\n");
            }
        }
        else{
            if(h == 0 && w > 0){
                h++;
                w--;
                printf(" Y\n");
            }
            else{
                printf(" N\n");
            }
        }
    }
    
    return 0;
}
