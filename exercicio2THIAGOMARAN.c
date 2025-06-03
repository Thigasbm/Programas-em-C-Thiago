#include <stdio.h>
#define andares 3

int A[andares];

int main()
{

    int total=0;
    int i = 0;
    do
    {
        printf("informe o numero de funcionarios do andar %d: ", i + 1);
        scanf("%d", &A[i]);

        if (A[i] > 0 && A[i] < 1000)
        {
            i++;
        }
        else
        {
            printf("informado valor indevido de funcionarios");
            return 0;
        }

    } while (i < andares);

    int mult=0;
    for (i = 0; i < andares; i++)
    {
        mult = A[i]*2;
        A[i]=mult;
        //printf("%d\n", A[i]);
        total += A[i];
    }

    int mn = total*2;
    int tmp[andares];
    for (i = 0; i < andares; i++)
    {
        
        tmp[i] = total - A[i];
        
        if(tmp[i]<mn){
            mn=tmp[i];
            total = total - mn;
        }
    }

    printf("%d",total);

    return 0;
}
