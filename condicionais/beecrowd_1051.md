Código-fonte incompleto... completar na aula de 12/04/2024!

```
#include<stdio.h>

int main(){
    double salario,restante,imposto;

    scanf("%lf",&salario);

    if(salario > 4500.00){
        restante = salario - 4500.00;
        imposto = 0.28*restante+(1500.00*0.18)+(1000.00*0.08);
    }else{
        if(salario > 3000.00){
            restante = salario - 3000.00;
            imposto = 0.18*restante + (1000.00*0.08);
        }else{

        }
    }
    return 0;
}

```
