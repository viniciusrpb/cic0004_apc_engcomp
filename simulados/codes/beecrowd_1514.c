#include<stdio.h>

int main(){
    int i,j,ans,n,m,um,dois,tres,quatro;
    int contest[101][101],problem[101],contestant[101];

    scanf("%d %d",&n,&m);

    while(n != 0 || m != 0){

        for(i = 0; i < 101; i++){
            problem[i] = 0;
            contestant[i] = 0;
        }

        ans = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++){
                scanf("%d",&contest[i][j]);
                contestant[i]+=contest[i][j];
                problem[j]+=contest[i][j];
            }
        }
        
        /*criterio 1*/
        um = 0;
        for(i = 0; i < n; i++){
        	  if(contestant[i]==m){
        		  um++;
		        }
	      }
	
	      if(um == 0){
      		  ans++;
      	}

      	/*criterios 2 e 3*/
      	dois = 0;
      	tres = 0;
        for(j = 0; j < m; j++){
            if(problem[j] > 0){
                dois++;
      		  }
      		  if(problem[j] == n){
      			    tres++;
      		  }
      	}
	
      	if(dois == m){
      		  ans++;
      	}
      	
      	if(tres == 0){
      		  ans++;
      	}
        
        /*criterio 4*/
        quatro = 0;
        for(i = 0; i < n; i++){
        	  if(contestant[i] >= 1){
        		    quatro++;
		        }
	      }
        
        if(quatro == n){
        	  ans++;
	      }
        
        printf("%d\n",ans);
        scanf("%d %d",&n,&m);
    }
    return 0;
}
