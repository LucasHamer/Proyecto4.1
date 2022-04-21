#include<stdio.h>
#include<stdlib.h>

int main()
{
    float NUMuno,NUMdos,NUMtres;

    printf("Digite el primer numero: ");
    scanf("%f",&NUMuno);
    printf("Digite el segundo numero: ");
    scanf("%f",&NUMdos);
    printf("Digite el tercer numero: ");
    scanf("%f",&NUMtres);

    if(NUMuno>NUMdos && NUMuno>NUMtres){
        printf("El primer numero es el mayor");
    }
    if(NUMdos>NUMuno && NUMdos>NUMtres){
        printf("El segundo numero es el mayor");
    }
    if(NUMtres>NUMuno && NUMtres>NUMdos){
        printf("El tercer numero es el mayor");
    }

    return 0;
}
