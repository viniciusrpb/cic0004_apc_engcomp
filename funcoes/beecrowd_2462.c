#include<stdio.h>

int converteMinutos(int horas, int minutos){
    return horas*60 + minutos;
}

int main(){
    
    int hpA,mpA,hpB,mpB,hcA,mcA,hcB,mcB,cA,pA,cB,pB,fuso,ida,volta,tempo_final,virou;

    scanf("%d:%d %d:%d %d:%d %d:%d",&hpA,&mpA,&hcB,&mcB,&hpB,&mpB,&hcA,&mcA);
    
    pA = converteMinutos(hpA,mpA);
    cB = converteMinutos(hcB,mcB);
    
    pB = converteMinutos(hpB,mpB);
    cA = converteMinutos(hcA,mcA);
    
    ida = cB - pA;
    
    if(ida < 0){
        ida=1440+ida;
    }
    
    volta = cA - pB;
    
    if(volta < 0){
        volta=1440+volta;
    }
    
    tempo_final = (ida+volta)/2;
    
    if(tempo_final>=720){
        tempo_final = tempo_final - 720;
    }
    
    fuso = (ida-tempo_final)/60;
    if(fuso > 12){
        fuso = fuso - 24;
    }
    
    printf("%d %d\n", tempo_final, fuso);
    
    return 0;
}
