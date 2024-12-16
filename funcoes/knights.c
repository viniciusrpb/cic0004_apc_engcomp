#include<stdio.h>

int pos(char c){
    
    if(c == 'a'){
        return 1;
    }
    else if(c == 'b'){
        return 2;
    }
    else if(c == 'c'){
        return 3;
    }
    else if(c == 'd'){
        return 4;
    }
    else if(c == 'e'){
        return 5;
    }
    else if(c == 'f'){
        return 6;
    }
    else if(c == 'g'){
        return 7;
    }
    else{
        return 8;
    }
    
}

int main(){
    char cx1,cx2;
    int x1,x2,y1,y2;
    
    scanf("%c%d %c%d",&cx1,&y1,&cx2,&y2);
    
    x1 = pos(cx1);
    x2 = pos(cx2);
    
    /* agora resolve o problema :) */
    
    return 0;
}
