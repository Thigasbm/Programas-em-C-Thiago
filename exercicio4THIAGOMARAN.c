#include <stdio.h>

int t[4],cod;
int soma,d_verificador[2], mult_posicional;
int inicial;

int main(){

    int i;

    do{
    printf("informe os quatro digitos da sua conta:\n");
    scanf("%d",&inicial);

    ;
    for(i=0;i<4;i++){
        t[i]=inicial % 10;
        inicial /= 10;
        //printf("%d",t[i]);
    }
    }while(t[3] == NULL);

    soma=(t[1]*100 + t[2]*10 + t[3]*1)+(t[3]*100 + t[2]*10 + t[1]*1);

    //printf("\nsoma %d\n",soma);


// multiplicação-------------------------------------------

    int dig[4]={0,0,0,0},temp;

    temp = soma;

    //linha pega o resto (último dígito) e apaga o último número (temp / 10)
    i=0;
    while(temp>0){
        dig[i]=temp % 10;
        temp /= 10;
        i++;
    }

    if(mult_posicional>999){
        mult_posicional=dig[3]*0 + dig[2]*1 + dig[1]*2,dig[0]*3;
        //printf("teste:  %d e %d %d %d %d",mult_posicional,dig[3],dig[2],dig[1],dig[0]);
    }else{
        mult_posicional=dig[2]*1 + dig[1]*2 + dig[0]*3;
        //printf("teste:  %d e %d %d %d",mult_posicional,dig[2],dig[1],dig[0]);
    }

    temp=mult_posicional;
    i=0;
    while(temp>0){
        d_verificador[i]=temp%10;
        temp /= 10;
        i++;
    }
    
    if(d_verificador[0]==t[0]){
        printf("\nO digito verificador '%d' esta correto",t[0]);
    }else{
        printf("\nO digito verificador '%d' nao esta  correto, finalizando programa.",t[0]);
    }

    return 0;
}
