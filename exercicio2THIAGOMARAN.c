#include <stdio.h>
#define andares 3

int A[andares];
float soma;

int main(){

    int i=1;
    do{
        printf("informe o numero de funcionarios do andar %d: ",i);
        scanf("%d",&A[i]);

        if(A[i]>0&&A[i]<1000){
            soma += A[i];
            printf("%2.f\n",soma);
            i++;
        }else{
            return 0;
        }


    }while(i<andares||A[i]<0||A[i]>1000);
    
    return 0;
}
