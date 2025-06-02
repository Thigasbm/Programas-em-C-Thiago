#include <stdio.h>

//Eu deixei na tabela o VALOR DO BEM com 3 casas decimais somente para que a tabulação funcionasse,
//pois sem esse 3° '0' ficaria incorreto.

float valor_bem, depreciacao,taxa, valor_bem_depreciado,d_acumulada;
int periodo;

int main(){

    printf("Informe o valor do bem a ser depreciado: ");
    scanf("%f",&valor_bem);
    printf("Informe o valor da taxa de depreciação: ");
    scanf("%f",&taxa);
    printf("Informe o período de depreciação em anos: ");
    scanf("%d",&periodo);
   
   
    printf("============================================================\n");
    printf("Ano\t\tValor do bem\t\tDepreciacao\t\tValor depreciado\t\n");
        depreciacao = valor_bem*(taxa/100);

    int i;
    for(i=0;i<periodo;i++){
        depreciacao = valor_bem*(taxa/100);
        valor_bem_depreciado = valor_bem-depreciacao;

        printf("%d\t\t%.3f\t\t\t%.2f\t\t\t%.3f\n",i+1,valor_bem,depreciacao,valor_bem_depreciado);
        valor_bem=valor_bem_depreciado;
        d_acumulada += depreciacao;
    }
    printf("============================================================\n");
    printf("Depreciacao acumulada: %.2f",d_acumulada);

    return 0;
}