#include<stdio.h>

int main(){
    int n,r,p,infectados,inf_dia,dia;
    
    scanf("%d %d %d",&n,&r,&p);
    
    // inicialmente temos n infectados no primeiro dia
    infectados = n;
    
    // essa variavel calcula a qtde de NOVOS infectados no proximo dia
    inf_dia = n;
    
    // contagem de dias, que sera a resposta para o problema
    dia = 0;
    
    // enquanto a quantidade de dias nao ultrapassar P (como pede o problema)
    while(infectados < p){
        // atualiza a nova quantidade de infectados para o dia atualiza
        inf_dia = inf_dia*r;
        
        // soma a quantidade de infectados com os dias anteriores
        infectados += inf_dia;
        
        // passou-se um dia, acumula na resposta
        dia++;
    }
    
    printf("%d\n",dia);
    
    return 0;
}
