#ifndef UTN_H_
#define UTN_H_

int utn_getFloat(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
float sumar(float operadorUno , float operadorDos);
float restar(float operadorUno , float operadorDos);
float multiplicar(float operadorUno , float operadorDos);
int dividir(float operadorUno, float operadorDos, float *resultado);
int factorial(float numero, int* resultado);

#endif /* UTN_H_ */
