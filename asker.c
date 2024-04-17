#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main()
{
	time_t tiempoActual;
	struct tm *tiempoLocal;
	char nombreDia[10];

	setlocale(LC_TIME, "es_AR.UTF-8");

	tiempoActual = time(NULL);
	tiempoLocal = localtime(&tiempoActual);
	strftime(nombreDia, 10, "%A", tiempoLocal);

	char text[20];
	printf("que dia es hoy\n");
	scanf("%s",text);
	if(strcmp(text, nombreDia) == 0)
	{
		printf("Si, Hoy es %s \n",text);
	}
	else
	{
		printf("No hoy no es %s, Hoy es %s\n",text);
	}
	return 0;
}
