/*
 ============================================================================
 Name        : tp1.c
 Author      : Mario Streri
 Version     :
 Copyright   : Your copyright notice
 Description : Hacer una calculadora.Para ello el programa iniciará y contará con un menú de opciones:
 	 	 	   1-ingresar 1er operando(A=x)
 	 	 	   2-ingresar 2do operando(B=y)
 	 	 	   3-Calcular todas las operaciones
 	 	 	       a)calcular la suma(A+B)
				   b)calcular la resta(A-B)
				   c)calcular la division(A/B))
				   d)calcular la multiplicacion(A*B)
				   e)calcular el factorial(A!)
			   4-informar resultados
				   a)"el resultado de A+B es: r"
				   b)"el resultado de A-B es: r"
				   c)"el resultado de A/B es: r" o "No es posible dividir por cero"
				   d)"el resultado de A*B es: r"
				   e)"el factorial de A es: r1 y el factorial de B es: r2"
			   5-Salir.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf(stdin,NULL);

	float numeroUno;
	float numeroDos;
	float suma;
	float resta;
	float multiplicacion;
	int opcionMenu;
  int flag = 0;
  float resultadoDivision;
  int resultadoFactorialUno;
  int resultadoFactorialDos;

  do
  {
    printf("1-ingrese 1er operando\n");
    printf("2-ingrese 2do operando\n");
    printf("3-realizar operaciones\n");
    printf("4-resultado de la operacion\n");
    printf("5-salir\n\n");

    printf("Elija opcion de menu (1-5)");
    fflush(stdin);
    scanf("%d",&opcionMenu);

    while(opcionMenu<1 || opcionMenu>5)
    {
      printf("ERROR reingrese opcion (1-5)");
      fflush(stdin);
      scanf("%d",&opcionMenu);
    }
    switch(opcionMenu)
    {
      case 1:
        utn_getFloat(&numeroUno, "ingrese 1er operando\n\n", "ERROR",0,100000,2);
      break;
      case 2:
        utn_getFloat(&numeroDos, "ingrese 2do operando\n\n", "ERROR",0,100000,2);
      break;
      case 3:
        suma = sumar(numeroUno, numeroDos);
        resta = restar(numeroUno, numeroDos);
        multiplicacion = multiplicar(numeroUno, numeroDos);
        dividir(numeroUno, numeroDos, &resultadoDivision);
        factorial(numeroUno, &resultadoFactorialUno);
        factorial(numeroDos, &resultadoFactorialDos);
      break;
      case 4:
        printf("el resultado de la suma es:%.2f \n ", suma);
        printf("el resultado de la resta es: %.2f \n",resta);
        printf("el resultado de la multiplicacion es: %.2f \n",multiplicacion);
        if(dividir(numeroUno, numeroDos, &resultadoDivision)==0)
        {
          printf("el resultado de la division es:%.2f \n", resultadoDivision);
        }
        else
        {
        	printf("No es posible dividir por cero\n");
        }
        if(factorial(numeroUno, &resultadoFactorialUno)==0)
        {
        printf("el factorial de 1er operando es:%d \n",resultadoFactorialUno);
        }
        else
        {
          printf("No se puede factorear\n");
        }
            if(factorial(numeroUno, &resultadoFactorialUno)==0)
        {
        printf("el factorial de 2do operando es:%d\n",resultadoFactorialUno);
        }
        else
        {
          printf("No se puede factorear\n");
        }
      break;
      case 5:
        flag = 1;
      break;
    }
  }while(flag == 0);
	return 0;
}


















