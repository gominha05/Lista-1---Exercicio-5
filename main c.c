#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int P;
    int Q;


    printf("Digite os 8 primeiros digitos do seu RG, com espacos:");
    scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);

    P = 2*a+3*b+4*c+5*d+6*e+7*f+8*g+9*h;
    Q = P%11;
    Q = 11 - Q;

    printf("%d %d\n",P,Q);

    if((Q>=0)&&(Q<=9)){
        printf("Seu numero verificador e: %d",Q);
    }
    else{
        printf("Seu numero verificador e x");
    }

    return 0;
}
