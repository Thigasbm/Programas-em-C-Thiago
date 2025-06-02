#include <stdio.h>
#define n_competidores 10

//realmente esse exercicio foi uma desgraça

int main(){
    int N[n_competidores];
    int class=0;
    int K, i, j, ordena, val=0;

    for(i=0;i<n_competidores;i++){
    
        printf("pontuacao do competidor %d: ",i+1);
        scanf("%d",&N[i]);
        val++;
    }

    printf("Quantas vagas ha para classificacao: ");
    scanf("%d",&K);

    if(K>val){
        printf("numero de vagas superior ao de competidores, finalizando o processo.");

        return 0;
    }

    

    for (i=0;i<n_competidores;i++){
        for(j=i+1;j<n_competidores;j++){
            if(N[i]<N[j]){
                ordena = N[i];
                N[i] = N[j];
                N[j] = ordena; //reseta
            }
        }
    }

    int nota_corte=N[K-1]; //define a nota de corte para que os empatados sejam incluídos

    
    printf("\n");
    
    for(i=0;i<n_competidores;i++){ //para i menor que n_competidores, incremente i e faça:
        if(N[i]>=nota_corte){      //se a pontuação for igual ou maior que a nota de corte:
            class++;               //incremente class
        }else{
            break;                 //senão, finalize o programa
        }
    }
    
    printf("%d",class);
    
    /** 
    for(i=0;i<K;i++){
        printf("%d ",N[i]);
        class++;
    }*/
    
    
    return 0;
}