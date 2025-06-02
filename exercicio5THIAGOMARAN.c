#include <stdio.h>

char continuar;

int main(){

do{

        int qtd=0;
        float valor=0,total=0,total_qtd=0,media=0;

    do{

        printf("Informe a quantidade do item: ");
        scanf("%d",&qtd);
        if(qtd>0){
            printf("Informe o valor unitario do item: ");
            scanf("%f",&valor);

            if(valor<=0){
                printf("Valor informado indevidamente\n");
            }else{
                total_qtd += qtd;
                total += valor*qtd;
            }
        }


    }while(qtd>0);

    media = total/total_qtd;

    printf("\n||--------------------------------------------------||\n");
    printf("VALOR TOTAL DA COMPRA: %.2f\n",total);
    printf("VALOR MEDIO DA COMPRA: %.2f\n",media);

    if((int)total == total){
    printf("O valor total da compra eh %.0f reais",total);
    }else{
    float cents = total - (int)total;
    printf("O valor total da compra eh %.0f reais com %.2f centavos",total,cents);
    }
    
    printf("\n");

    // notas

    int dinheiro = (int)total;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quant[7];

    printf("%d reais equivale a:\n",dinheiro);

    int i=0;
    for(i=0;i<7;i++){ //i<7 -> 7 tipos de nota
        quant[i] = dinheiro / notas[i]; //divide pelas notas
        dinheiro = dinheiro % notas[i];

        if (quant[i] > 0){
            if(notas[i]==1){
                printf("%d moeda(s) de R$ %d\n", quant[i], notas[i]);
            }else{
                printf("%d nota(s) de R$ %d\n", quant[i], notas[i]);
            }
        }

    }
    printf("||--------------------------------------------------||\n");

    printf("Deseja repetir? (S/N): ");
    scanf(" %c",&continuar); //buffer de espaço para não bugar

    if(continuar!='S'||continuar!='s'||continuar!='N'||continuar!='n'){
        printf("Valor informado indevidamente, finalizando programa...");
    }

}while(continuar=='S'||continuar=='s');


    return 0;
}
