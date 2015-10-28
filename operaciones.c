#include <libintl.h>
#include <locale.h>
#include "operaciones.h"
#define _(cadena) gettext(cadena)

double sum(double a, double b)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	printf(_("\t\t\tType b = "));
	scanf("%lf",&b);
	return (a + b);
}

double resta(double a, double b)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	printf(_("\t\t\tType b = "));
	scanf("%lf",&b);
	return (a - b);
}

double mult(double a, double b)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	printf(_("\t\t\tType b = "));
	scanf("%lf",&b);
	return (a * b);
}

double divi(double a, double b)
{
	while(1) {
		printf(_("\t\t\tType a = "));
		scanf("%lf",&a);
		printf(_("\t\t\tType b = "));
		scanf("%lf",&b);
		if (b != 0) { 
			break;
		} else {
			printf(_("\t\t\tType b different from 0 "));
		}
	}
	return (a / b);
}

double seno(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return sin(a);
}

double coseno(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return cos(a);
}

double tangente(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return tan(a);
}

double aseno(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return asin(a);
}

double acoseno(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return acos(a);
}

double atangente(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return atan(a);
}

double senoh(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return sinh(a);
}

double cosenoh(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return cosh(a);
}

double tangenteh(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return tanh(a);
}

double atangente2(double a, double b)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	printf(_("\t\t\tType b = "));
	scanf("%lf",&b);
	return atan2(a, b);
}

int techo(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return ceil(a);
}

double exponencial(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return exp(a);
}

int piso(double a)
{
	printf(_("\t\t\tType a = "));
	scanf("%lf",&a);
	return floor(a);
}

/*---------------      18. fabs ()      ------------------*/
double valorAbsoluto(double a)
{
	printf("Ingrese el número a calcular valor absoluto:: ");
	scanf ("%lf", &a);
	return(fabs(a));
}

/*---------------      19. fmod ()      ------------------*/
double funcion_fmod(double a, double b, double resultado)
{
	/* Devuelve el residuo de la división para un número flotante */
	printf("Divisor:: ");
	scanf ("%lf", &a);
	printf("Dividendo:: ");
	scanf("%lf", &b); 
	resultado = fmod(a,b);
	printf("El residuo de %lf / %lf es %lf\n", a, b, resultado);
	return(resultado);	
}

/*---------------     20. frexp ()      ------------------*/
double funcion_frexp(double x, double frac)
{
	 /* Ingresado un número, lo descompone en un numero (fraccion) que multiplicado por dos y 
	 * elevado a una potencia da el número inicial (x = mantisa * 2^exp)                   */
	int e;
	printf("Ingrese un número:: ");
	scanf ("%lf", &x);
	frac = frexp(x, &e);
	printf("x = %.2lf = %.2lf * 2^%d\n", x, frac, e);
	return(frac);
}

/*---------------     21. ldexp ()      ------------------*/
double funcion_Idexp(double x, double ret)
{
	/* Eleva al número dos a una potencia dada y lo multiplica por el número ingresado (x * 2^exp) */
	int n;
	printf("Ingrese el número:: ");
	scanf("%lf", &x); 
	printf("Ingrese el exponente:: ");
	scanf ("%d", &n);
	ret = ldexp(x ,n);
	printf("%f * 2^%d = %f\n", x, n, ret);
	return(ret);
}

/*---------------      22. log ()       ------------------*/
double logaritmo(double a)
{
	printf("Ingrese el número:: ");
	scanf ("%lf", &a);
	return(log(a));
}

/*---------------     23. log10 ()      ------------------*/
double logBase10(double a)
{
	printf("Ingresa el número:: ");
	scanf ("%lf", &a);
	return(log10(a));
}

/*---------------      24. modf ()      ------------------*/
double funcion_modf(double x, double pfrac, double pentera)
{
	/* Separa la parte entera y la parte decimal de un número flotante*/
	printf("Enter a floating number ( integer and fractional part):");
	scanf ("%lf", &x);
	pfrac = modf(x,&pentera);
	printf("Integer part : %lf\n", pentera);
	printf("Decimal part: %lf \n", pfrac);
	return(0);
}

/*---------------       25. pow ()      ------------------*/
double potencia(double a, double b)
{
	printf("\nIngrese el número base::");
	scanf ("%lf", &a);
	printf("Ingrese la potencia:: ");
	scanf("%lf", &b); 
	return(pow(a,b));
}

/*---------------      26. sqrt ()      ------------------*/
double raizCuadrada(double a)
{
	printf("\n Número para sacar raíz cuadrada:: ");
	scanf ("%lf", &a);
	return (sqrt (a));
}

