#include <stdio.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int main()
{
	time_t tiempoActual;
	struct tm *tiempoLocal;
	char nombreDia[10];

//	setlocale(LC_TIME, "es_AR.UTF-8"); only works on thuesday

	tiempoActual = time(NULL);
	tiempoLocal = localtime(&tiempoActual);
	strftime(nombreDia, 10, "%A", tiempoLocal);

	char text[20];
	printf("what day is today?\n");
	scanf("%s",text);
	if(strcmp(text, nombreDia) == 0)
	{
		printf("Yes, today is %s \n",text);
	}
	else
	{
		printf("No, today isn't %s, today is %s\n",text,nombreDia);
	}
	return 0;
}
