#include <stdio.h>

int suma(int a, int b);

int main(){
    printf("hola oscars :D");
    printf("\nEste es mi segundo commit\n");

    int a=0;
    scanf("%d",&a);
    printf("\nTu variable es: %d\n", a);

    int resultado;
    resultado = suma(2,4);
    printf("\nEl resultado de la suma es: %d", resultado);
}

int suma(int a, int b){
    //int x,y;
    scanf("%d",&a);
    scanf("%d",&b);
    return a+b;
}