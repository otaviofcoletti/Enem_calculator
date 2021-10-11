#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>





int main(){


float linguagens,matematica,natureza,humanas,redacao;


	FILE *p_arq;

	p_arq = fopen("notas_enem.txt","r");

		fscanf(p_arq,"%f",&linguagens);
		fscanf(p_arq,"%f",&humanas);
		fscanf(p_arq,"%f",&natureza);
		fscanf(p_arq,"%f",&matematica);
		fscanf(p_arq,"%f",&redacao);

	fclose(p_arq);

	printf("Insira os pesos do seu curso na ordem linguagens,matematica,natureza,humanas,redacao\n");

	int pesos[5];

	for (int i = 0; i < 5; ++i)
	{
		scanf("%i",&pesos[i]);
	}



	float media = (linguagens*pesos[0] + matematica*pesos[1] + natureza*pesos[2] + humanas*pesos[3] + redacao*pesos[4])/(pesos[0] + pesos[1] + pesos[2] + pesos[3] + pesos[4]);

		printf("Sua média no seu curso é %.3f\n",media);
		printf("E suas notas são\n");
		printf("%f\n",linguagens);
		printf("%f\n",humanas);
		printf("%f\n",natureza);
		printf("%f\n",matematica);
		printf("%f\n",redacao);

		printf("Quer adicionar ao arquivo?[s/n]\n");

		char resp;
		scanf(" %c",&resp);

		if(resp == 's' || resp == 'S'){
			char car;
			scanf("%c",&car);
			printf("escreva o nome do curso\n");
			char curso[50];
			fgets(curso,50,stdin);

			p_arq = fopen("notas_cursos_enem.txt","a");

			fprintf(p_arq, "%s  ",curso );
			fprintf(p_arq ,"%.3f\n",media);

			fclose(p_arq);


		}

		else{
			printf("Nota nao salva\n");
			return 0;
		}




	




return 0;







}