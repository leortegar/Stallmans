#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "operaciones.h"

void menu()
{
	printf("\t\t\t----------Bienvenido a Calculadora Stallmans!-----------\n");
	printf("\t\t\t---------------Opciones de calculadora------------------\n");
	printf("\t\t\t---------------        1. Suma        ------------------\n");
	printf("\t\t\t---------------       2. Resta        ------------------\n");
	printf("\t\t\t---------------   3. Multiplicación   ------------------\n");
	printf("\t\t\t---------------      4. División      ------------------\n");
	printf("\t\t\t---------------        5. Seno        ------------------\n");
	printf("\t\t\t---------------       6. Coseno       ------------------\n");
	printf("\t\t\t---------------      7. Tangente      ------------------\n");
	printf("\t\t\t---------------      8. Arco Seno     ------------------\n");
	printf("\t\t\t---------------     9. Arco Coseno    ------------------\n");
	printf("\t\t\t---------------   10. Arco Tangente   ------------------\n");
	printf("\t\t\t---------------      11. Seno Hip     ------------------\n");
	printf("\t\t\t---------------     12. Coseno Hip    ------------------\n");
	printf("\t\t\t---------------    13. Tangente Hip   ------------------\n");
	printf("\t\t\t---------------      14. atan2()      ------------------\n");
	printf("\t\t\t---------------      15. Ceil ()      ------------------\n");
	printf("\t\t\t---------------       16. Exp ()      ------------------\n");
	printf("\t\t\t---------------      17. Floor ()     ------------------\n");
	printf("\t\t\t---------------      18. fabs ()      ------------------\n");
	printf("\t\t\t---------------      20. fmod ()      ------------------\n");
	printf("\t\t\t---------------     21. frexp ()      ------------------\n");
	printf("\t\t\t---------------     22. ldexp ()      ------------------\n");
	printf("\t\t\t---------------      23. log ()       ------------------\n");
	printf("\t\t\t---------------     24. log10 ()      ------------------\n");
	printf("\t\t\t---------------      25. modf ()      ------------------\n");
	printf("\t\t\t---------------       26. pow ()      ------------------\n");
	printf("\t\t\t---------------      27. sqrt ()      ------------------\n");
	printf("\t\t\t---------------      28. SALIR        ------------------\n");
	
}


int main(){
	int op,salir=0;
	double a,b,resultado;
	while (!salir){
		menu();

		printf("\t\t\t:::::Ingresa tu opción:::");
		scanf("%d",&op);

		switch (op)
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
		case 28: 
			salir=1;
			break;
		default:
			printf("Opción desconocida, pruebe otra vez sólo con dígitos.");
		}
	
		printf("\t\t\tResultado = %lf\n",resultado);
		
		sleep(3);
		system("clear");
	}
	return 0;
}
