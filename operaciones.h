#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


/*--------------- Validacion de numeros ------------------*/
bool isDouble(char into[]);
void getNumbers (double *a, double *b);
void getNumber (double *a);
/*---------------        1. Suma        ------------------*/
double sum(double a, double b);
/*---------------       2. Resta        ------------------*/
double resta(double a, double b);
/*---------------   3. Multiplicación   ------------------*/
double mult(double a, double b);
/*---------------      4. División      ------------------*/
double divi(double a, double b);
/*---------------        5. Seno        ------------------*/
double seno(double a);
/*---------------       6. Coseno       ------------------*/
double coseno(double a);
/*---------------      7. Tangente      ------------------*/
double tangente(double a);
/*---------------      8. Arco Seno     ------------------*/
double aseno(double a);
/*---------------     9. Arco Coseno    ------------------*/
double acoseno(double a);
/*---------------   10. Arco Tangente   ------------------*/
double atangente(double a);
/*---------------      11. Seno Hip     ------------------*/
double senoh(double a);
/*--------------     12. Coseno Hip    -------------------*/
double cosenoh(double a);
/*---------------    13. Tangente Hip   ------------------*/
double tangenteh(double a);
/*---------------      14. atan2()      ------------------*/
double atangente2(double a, double b);
/*---------------      15. Ceil ()      ------------------*/
int techo(double a);
/*---------------       16. Exp ()      ------------------*/
double exponencial(double a);
/*---------------      17. Floor ()     ------------------*/
int piso(double a);
/*---------------      18. fabs ()      ------------------*/
double valorAbsoluto(double a);
/*---------------      19. fmod ()      ------------------*/
double funcion_fmod(double a, double b, double resultado);
/*---------------     20. frexp ()      ------------------*/
double funcion_frexp(double x, double frac);
/*---------------     21. ldexp ()      ------------------*/
double funcion_Idexp(double x, double ret);
/*---------------      22. log ()       ------------------*/
double logaritmo(double a);
/*---------------     23. log10 ()      ------------------*/
double logBase10(double a);
/*---------------      24. modf ()      ------------------*/
double funcion_modf(double x, double pfrac, double pentera);
/*---------------       25. pow ()      ------------------*/
double potencia(double a, double b);
/*---------------      26. sqrt ()      ------------------*/
double raizCuadrada(double a);
