# 6.3. Ordenação


O laço externo (i) percorre cada elemento do vetor. O laço interno (j) compara o elemento na posição (i) com todos os elementos após ele (j>i). Sempre que o elemento v[i] for maior que v[j], os dois elementos são trocados. No final, o vetor estará ordenado em ordem crescente.


```
#define MAX_N 1000

void ordena(int v[MAX_N], int n){

    int i,j,aux;

    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}
```
