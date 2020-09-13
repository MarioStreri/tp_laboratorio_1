#include <stdio.h>
#include <stdlib.h>

/*
 *\brief Solicita un numero entero
 *\param float* pResultado, puntero a direccion de memoria
 *\param char* mensaje, mensaje al usuario.
 *\param char* mensajeError, mensaje de error al usuario.
 *\param float minimo, valor minimo
 *\param float maximo, valor maximo
 *\param int reintentos, reintentos para que el usuario ingrese datos.
 *\return int  0 si esta bien , 1 caso de error.
*/
int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
  int retorno;
  float numero;
  while(reintentos>0)
  {
    printf(mensaje);
    scanf("%f",&numero);
    if(numero<=maximo && numero>=minimo)
    break;
    reintentos--;
    printf(mensajeError);
  }
  if(reintentos==0)
  {
    retorno=-1;
  }
  else
  {
    retorno=0;
    *pResultado = numero;
  }
  return retorno;
}

/*
 * \brief Realiza la operación suma.
 * \param float operadorUno, Es el primer numero.
 * \param float operadorDos, Es el segundo numero.
 * \return resultado de la operacion
*/
float sumar(float operadorUno , float operadorDos)
{
	float totalSuma;
	totalSuma = operadorUno + operadorDos;

	return totalSuma;
}

/*
 * \brief Realiza la operación resta.
 * \param float operadorUno, Es el primer numero.
 * \param float operadorDos, Es el segundo numero.
 * \return resultado de la operacion
*/
float restar(float operadorUno , float operadorDos)
{
	float totalResta;
	totalResta = operadorUno - operadorDos;

	return totalResta;
}

/*
 *\brief Realiza la operación multiplicacion.
 *\param float operadorUno, Es el primer numero.
 *\param float operadorDos, Es el segundo numero.
 *\return resultado de la operacion
*/
float multiplicar(float operadorUno , float operadorDos)
{
	float totalMultiplicacion;
	totalMultiplicacion = operadorUno * operadorDos;

	return totalMultiplicacion;
}

/*
 *\brief Realiza la operación dividir.
 *\param float operadorUno, Es el primer numero.
 *\param float operadorDos, Es el segundo numero.
 *\param float *resultado,Es el resultado de la operacion.
 *\return resultado de la operacion
*/
int dividir(float operadorUno, float operadorDos, float *resultado)
{
  int retorno;

  if(operadorUno != 0)
  {
    *resultado = operadorUno / operadorDos;
    retorno = 0;
  }
  else
  {
    retorno = -1;
  }
  return retorno;
}

/*
 *\brief Realiza la operación factorial.
 *\param float numero, Es el numero ingresado.
 *\param float *resultado,Es el resultado de la operacion.
 *\return (-1) No se puede resolver / (0) si se pudo resolver.
*/
int factorial(float numero, int* resultado)
{
  int retorno;
  int i;
  int factorial = 1;

  if(numero > 0)
  {
    for(i=(int)numero; i>1; i--)
    {
      factorial = factorial * i;
    }
    *resultado = factorial;
    retorno = 0;
  }
  else
  {
    retorno = -1;
  }
  return retorno;
}
