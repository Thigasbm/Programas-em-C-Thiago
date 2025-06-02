#include <stdio.h>

int t[4];
int soma,d_verificador[2], mult_posicional;

int main(){

    int i;
    for(i=0;i<4;i++){
    scanf("%d",&t[i]);
    }

    for(i=0;i<4;i++){
    //printf("%d ",t[i]);
    }

    soma=(t[0]*100 + t[1]*10 + t[2]*1)+(t[2]*100 + t[1]*10 + t[0]*1);

    if (soma<500){
        
    }

    //printf("\n soma %d",soma);


// multiplicação-------------------------------------------

    int dig[4],temp;

    temp = soma;

    //linha pega o resto (último dígito) e apaga o último número (temp / 10)
    i=0;
    while(temp>0){
        dig[i]=temp % 10;
        temp /= 10;
        i++;
    }

    
    if(soma>500){
        
        mult_posicional=dig[3]*0 + dig[2]*1 + dig[1]*2 + dig[0]*3;
    }else{
        mult_posicional=dig[2]*0 + dig[1]*1 + dig[0]*2;
    }
    //printf("aaa %d e %d %d %d %d",mult_posicional,dig[3],dig[2],dig[1],dig[0]);

    temp=mult_posicional;
    i=0;
    while(temp>0){
        d_verificador[i]=temp%10;
        temp /= 10;
        i++;
    }

    printf("O digito verificador eh: %d",d_verificador[0]);

    return 0;   
}