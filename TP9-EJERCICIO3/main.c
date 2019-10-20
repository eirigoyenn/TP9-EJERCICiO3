/* 
 * File:   main.c
 * Author: enrique
 *
 * Created on 17 de octubre de 2019, 11:51
 */

#include <stdio.h>
#include <stdlib.h>

int suma_digitos(int n1); /*Funcion recursiva para obtener la suma de los digitos de un numero*/
/*
 * 
 */
int main(void) {
    
    int numero=123456;   /*Numero elegido para probar el programa*/
    int valor;           /*Variable para guardar el valor de la suma de los digitos*/
    
    valor=suma_digitos(numero);          /*llamo a la funcion para obtener la suma de los digitos de "numero" */
    
    printf("La suma de los digitos del numero: %d \n",numero);
    printf("Es : %d \n", valor);
   
    return (EXIT_SUCCESS);
}

int suma_digitos(int n1){
    
    if(n1<10){          /*Caso base: si el numero es menor a 10(de 1 cifra) ,devuelvo ese numero*/
        
        return n1;
    }
 
    return ((n1 % 10) + suma_digitos(n1 / 10)); /*caso recursivo: devuelvo el modulo del numero divido 10 y llamo a la funcion con el numero dividido 10*/
}