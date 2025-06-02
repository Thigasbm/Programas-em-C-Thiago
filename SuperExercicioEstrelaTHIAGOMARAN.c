#include <stdio.h>

/**
 Eu usei o GPT para entender o funcionamento da linha 36 a 49,
 porque não estava conseguindo fazer por conta, o restante
 eu fiz da minha forma.

 A parte onde não estava conseguindo se refere à var "ultima",
 já que, como mostra a logica do gpt, eu preciso guardar o
 valor da estrela[i] antes de decrementar ela, e estava
 causando erros no resultado do meu sistema.
 */

int main(){

    int estrela[100];
    int atacadas[100]={0}; //deve ser inicializado com 0 para dar o resultado certo no final, pois tem lixo se não inicializado
    int total_atk=0, carneiros,qtd_estrelas,ultima;


    printf("Quantas estrelas existem?\n");
    scanf(" %d",&qtd_estrelas);    

    int i=0;
    while(i<qtd_estrelas){
        printf("Quantos carneiros ha no sitio Estrela %d?",i+1);
        scanf(" %d",&carneiros);
        estrela[i] = carneiros;
        i++;
    }

    /** 
    //apresenta quantos carneiros cada estrela tem
    for(i=0;i<qtd_estrelas;i++){
        printf("%d ",estrela[i]);
    }
    */

    printf("\n---------------------Resultado---------------------\n");

    i=0;
    while(i>=0 && i<qtd_estrelas){  //enquanto i for maior que 0 (em algum momento, ele vai zerar), i for menor que qtd_estrelas     
        if(estrela[i]>0){           //se for maior que 0
            if(atacadas[i]==0){     //se atacadas[i] for 0 (não foi atacado ainda) - todos os [i] são 0. então viram 1 para definir "atacado"
                atacadas[i]=1;      //define atacadas[i] como 1 (atacado)
                total_atk++;        //incrementa total_atk
            }

            ultima = estrela[i]; //salva o valor da estrela[i] em ultima
            estrela[i]--;        //desincrementa estrela[i] (rouba)

            if(ultima%2==0){     //se o resto for 0:
                i--;
            }else{
                i++;
            }
        }else{                   //se estrela[i] for 0, vai repetir o processo, mas sem contabilizar a var total_atk
            if (estrela[i]%2==0){
                i--;
            }else{
                i++;
            }
        }
    }   

    //Parte 2 - fazer a saída apresentando quantas estrelas foram atacadas e quantos carneiros sobraram

    int sobra_carneiros=0; //deve ser inicializado com 0 para dar o resultado certo no final, pois tem lixo se não inicializado

    for(i=0;i<qtd_estrelas;i++){        //para i menor que a qtd_estrelas:
        sobra_carneiros += estrela[i];  //soma o que sobrou na var sobra_carneiros
    }

    printf("%d sitios foram atacados, e sobraram %d carneiros",total_atk,sobra_carneiros);

    return 0;
}