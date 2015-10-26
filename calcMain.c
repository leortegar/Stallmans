#include <stdio.h>
#include <math.h>

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
}

double sum(double a, double b)
{
	printf("\t\t\tIngresa a = ");
        scanf("%lf",&a);
        printf("\t\t\tIngresa b = ");
        scanf("%lf",&b);
	return (a + b);
}

double resta(double a, double b)
{
	printf("\t\t\tIngresa a = ");
        scanf("%lf",&a);
        printf("\t\t\tIngresa b = ");
        scanf("%lf",&b);
        return (a - b);
}


int main(){
	int op;
	double a,b,resultado;
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
	default:
		printf("Opción desconozida, pruebe otra vez sólo con dígitos.");
	}
	
	printf("\t\t\tLa suma de a + b = %lf\n",resultado);

	return 0;
}
