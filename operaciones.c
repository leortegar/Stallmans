#include <libintl.h>
#include <locale.h>
#include "operaciones.h"
#define _(cadena) gettext(cadena)


bool isDouble(char into[]){

    int length = strlen(into);
    bool flag1 = false;
    into = into + (length-1);
    for( ; length > 0 ; ){
        int integer = *into - '0';
        if( integer>=0 && integer<=9 ){
            into--;
            length--;
        } else if( integer == -2 && length > 1 && flag1 == false) {
            flag1 = true;
            into--;
            length--;
        }
        else
            return false;
    }
    return true;
}

void getNumbers (double *a, double *b)
{
     char into[9];
     bool flag = false;
     do{
		printf(_("\t\t\tType a = "));
        scanf("%s", into);
        if( (flag = isDouble(into)) == false )
            printf(_("\t\t\tOnly Numbers"));
     } while( flag == false );
     *a = atof(into);

     do{
		printf(_("\t\t\tType b = "));
        scanf("%s", into);
        if( (flag = isDouble(into)) == false )
            printf(_("\t\t\tOnly Numbers"));
     } while( flag ==false );
     *b = atof(into);
}

void getNumber (double *a)
{
     char into[9];
     bool flag = false;
     do{
		printf(_("\t\t\tType a = "));
        scanf("%s", into);
        if( (flag = isDouble(into)) == false )
            printf(_("\t\t\tOnly Numbers"));
     } while( flag == false );
     *a = atof(into);
}

double sum(double a, double b)
{
    getNumbers(&a, &b);
	return (a + b);
}

double resta(double a, double b)
{
    getNumbers(&a, &b);
	return (a - b);
}

double mult(double a, double b)
{

    getNumbers(&a, &b);
	return (a * b);
}

double divi(double a, double b)
{
	while(1) {

        getNumbers(&a, &b);

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

    getNumber(&a);
	return sin(a);
}

double coseno(double a)
{
    getNumber(&a);
	return cos(a);
}

double tangente(double a)
{
    getNumber(&a);
	return tan(a);
}

double aseno(double a)
{
    getNumber(&a);
	return asin(a);
}

double acoseno(double a)
{
    getNumber(&a);
	return acos(a);
}

double atangente(double a)
{
    getNumber(&a);
	return atan(a);
}

double senoh(double a)
{
    getNumber(&a);
	return sinh(a);
}

double cosenoh(double a)
{
    getNumber(&a);
	return cosh(a);
}

double tangenteh(double a)
{
    getNumber(&a);
	return tanh(a);
}

double atangente2(double a, double b)
{
    getNumbers(&a, &b);
	return atan2(a, b);
}

int techo(double a)
{
    getNumber(&a);
	return ceil(a);
}

double exponencial(double a)
{
    getNumber(&a);
	return exp(a);
}

int piso(double a)
{
    getNumber(&a);
	return floor(a);
}

/*---------------      18. fabs ()      ------------------*/
double valorAbsoluto(double a)
{
    getNumber(&a);
	return(fabs(a));
}

/*---------------      19. fmod ()      ------------------*/
double funcion_fmod(double a, double b, double resultado)
{
	/* Devuelve el residuo de la división para un número flotante */
	printf(_("Divisor:: "));
	scanf ("%lf", &a);
	printf(_("Dividend:: "));
	scanf("%lf", &b);
	resultado = fmod(a,b);
	printf(_("Remainder of "));
	printf("%lf/ ",a);
	printf(_("is "));
	printf("%lf\n",resultado);
	return(resultado);
}

/*---------------     20. frexp ()      ------------------*/
double funcion_frexp(double x, double frac)
{
	 /* Ingresado un número, lo descompone en un numero (fraccion) que multiplicado por dos y
	 * elevado a una potencia da el número inicial (x = mantisa * 2^exp)                   */
	int e;
	printf(_("Type a number:: "));
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
    printf(_("Type a number:: "));
    scanf("%lf", &x);
    printf(_("Type exponent:: "));
    scanf ("%d", &n);
	ret = ldexp(x ,n);
	printf("%f * 2^%d = %f\n", x, n, ret);
	return(ret);
}

/*---------------      22. log ()       ------------------*/
double logaritmo(double a)
{
    getNumber(&a);
	return(log(a));
}

/*---------------     23. log10 ()      ------------------*/
double logBase10(double a)
{
    getNumber(&a);
	return(log10(a));
}

/*---------------      24. modf ()      ------------------*/
double funcion_modf(double x, double pfrac, double pentera)
{
	/* Separa la parte entera y la parte decimal de un número flotante*/
	printf(_("Enter a floating number ( integer and fractional part):"));
	scanf ("%lf", &x);
	pfrac = modf(x,&pentera);
	printf(_("Integer part : "));
	printf("%lf\n",pentera);
	printf(_("Decimal part: "));
	printf("%lf \n",pfrac);
	return(0);
}

/*---------------       25. pow ()      ------------------*/
double potencia(double a, double b)
{
    getNumbers(&a, &b);
	return(pow(a,b));
}

/*---------------      26. sqrt ()      ------------------*/
double raizCuadrada(double a)
{
    getNumber(&a);
	return (sqrt (a));
}
