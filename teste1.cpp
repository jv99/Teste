#include <stdio.h>
#include <conio.h>
#include <locale.h>

main (){
	setlocale(LC_ALL, "Portuguese");
	
	float v1,v2,result;
	int op;
	
	printf ("Informe um valor para v1: \n");
		scanf ("%f",&v1);
	
	printf ("Informe um valor para v2: \n");
		scanf ("%f",&v2);
	
	printf ("Informe 1 para soma | Informe 2 para subtração | Informe 3 para multiplicação | Informe 4 para divisão\n");
		scanf ("%i",&op);
		
		if (op == 1) {
			result = (v1+v2);
				printf ("Resultado da soma: %.2f",result);
		}
		
		if (op == 2) {
				if (v1>v2){
					result = (v1-v2);
					printf ("Resultado da subtração: %.2f",result);
				}
				else {
					result = (v2-v1);
					printf ("Resultado da subtração: %.2f",result);
				}
					
		if (op == 3) {
			result = (v1*v2);
				printf ("Resultado da multiplicação: %.2f",result);
		}

		}
			if (op == 4) {
			
				if (v1>v2){
					result = (v1/v2);
					printf ("Resultado da divisão: %.2f",result);
				}
				else {
					result = (v2/v1);
					printf ("Resultado da divisão: %.2f",result);
				}
		}
	
		
}
