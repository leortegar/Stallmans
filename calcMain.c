#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libintl.h>
#include <locale.h>
#include "operaciones.h"

#define _(cadena) gettext(cadena)

void menu()
{
	printf(_("\t\t\t----------Welcome to Stallmans Calculator!-----------\n"));
	printf(_("\t\t\t----------------Options Calculator-------------------\n"));
	printf(_("\t\t\t---------------        1. Add        ------------------\n"));
	printf(_("\t\t\t---------------       2. Substract        ------------------\n"));
	printf(_("\t\t\t---------------   3. Multiplication   ------------------\n"));
	printf(_("\t\t\t---------------      4. Division      ------------------\n"));
	printf(_("\t\t\t---------------        5. Sine        ------------------\n"));
	printf(_("\t\t\t---------------       6. Cosine       ------------------\n"));
	printf(_("\t\t\t---------------      7. Tangent      ------------------\n"));
	printf(_("\t\t\t---------------      8. Arco Sine     ------------------\n"));
	printf(_("\t\t\t---------------     9. Arco Cosine    ------------------\n"));
	printf(_("\t\t\t---------------   10. Arco Tangent   ------------------\n"));
	printf(_("\t\t\t---------------      11. Sine Hip     ------------------\n"));
	printf(_("\t\t\t---------------     12. Cosine Hip    ------------------\n"));
	printf(_("\t\t\t---------------    13. Tangent Hip   ------------------\n"));
	printf("\t\t\t---------------      14. atan2()      ------------------\n");
	printf("\t\t\t---------------      15. Ceil ()      ------------------\n");
	printf("\t\t\t---------------       16. Exp ()      ------------------\n");
	printf("\t\t\t---------------      17. Floor ()     ------------------\n");
	printf("\t\t\t---------------      18. fabs ()      ------------------\n");
	printf("\t\t\t---------------      19. fmod ()      ------------------\n");
	printf("\t\t\t---------------     20. frexp ()      ------------------\n");
	printf("\t\t\t---------------     21. ldexp ()      ------------------\n");
	printf("\t\t\t---------------      22. log ()       ------------------\n");
	printf("\t\t\t---------------     23. log10 ()      ------------------\n");
	printf("\t\t\t---------------      24. modf ()      ------------------\n");
	printf("\t\t\t---------------       25. pow ()      ------------------\n");
	printf("\t\t\t---------------      26. sqrt ()      ------------------\n");
	printf(_("\t\t\t---------------      27. EXIT        ------------------\n"));
}


int main(){
	bind_textdomain_codeset ("calcMain", "UTF-8");
	setlocale(LC_ALL, "");
	bindtextdomain("calcMain", "idioma");
	textdomain("calcMain");
	float op;
	int salir=0;
	double a,b,resultado;
	while (!salir){
		menu();
		op = 0.0;
		printf(_("\t\t\t:::::Type your option:::"));
		scanf("%f",&op);
		if(!isnan(op)){
			switch ((int)op)
			{
			case 1:
				resultado = sum(a, b);
				break;
			case 2:
				resultado = resta(a, b);
				break;
			case 3:
				resultado = mult(a, b);
				break;
			case 4:
				resultado = divi(a, b);
				break;
			case 5:
				resultado = seno(a);
				break;
			case 6:
				resultado = coseno(a);
				break;
			case 7:
				resultado = tangente(a);
				break;
			case 8:
				resultado = aseno(a);
				break;
			case 9:
				resultado = acoseno(a);
				break;
			case 10:
				resultado = atangente(a);
				break;
			case 11:
				resultado = senoh(a);
				break;
			case 12:
				resultado = cosenoh(a);
				break;
			case 13:
				resultado = tangenteh(a);
				break;
			case 14:
				resultado = atangente2(a,b);
				break;
			case 15:
				resultado = techo(a);
				break;
			case 16:
				resultado = exponencial(a);
				break;
			case 17:
				resultado = piso(a);
				break;
		        case 18:
		                resultado = valorAbsoluto(a);
		                break;
		        case 19:
		                resultado = funcion_fmod(a, b, resultado);
		                break;
		        case 20:
		                resultado = funcion_frexp(a, b);
		                break;
		        case 21:
		                resultado = funcion_Idexp(a, b);
		                break;
		        case 22:
		                resultado = logaritmo(a);
		                break;
		        case 23:
		                resultado = logBase10(a);
		                break;
		        case 24:
		                resultado = funcion_modf(a,b,resultado);
		                break;
		        case 25:
		                resultado = potencia(a,b);
		                break;
		        case 26:
		                resultado = raizCuadrada(a);
		                break;
			case 27: 
				salir=1;
				break;
			default:
				printf(_("unknown option, try again only digits"));
				getchar();
			}
			if(!salir){
				printf(_("\t\t\tResult = %lf\n"),resultado);
			}
			sleep(2);
			system("clear");
		}
	}
	return 0;
}
