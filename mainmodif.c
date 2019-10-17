
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(void) {
    
    int numero=123456;
    int valor;
    
    valor=suma_digitos(numero);
    
    printf("La suma de los digitos del numero: %d \n",numero);
    printf("Es : %d \n", valor);
   
    return (EXIT_SUCCESS);
}

int suma_digitos(int n1){
    if (n1<10){
        return n1;
    }
    else {
    return ((n1 % 10) + suma_digitos(n1 / 10)); 
    }
}
