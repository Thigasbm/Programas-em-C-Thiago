#include <stdio.h>
#define andares 3

int A[andares];
float soma;

int main(){

    int i;
    for(i=0;i<andares;i++){
        printf("informe o número de funcionarios do andar %d: ",i+1);
        scanf("%d",&A[i]);

        if(A[i]<0||A[i]>1000){
            printf("O número é maior que 1,000 ou menor que 0");
            break;
        }

        soma += A[i];
        printf("%2.f",soma);
    }



    return 0;
}