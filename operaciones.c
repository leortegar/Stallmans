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


