#include <stdio.h>
void main()
{
	int fila = 10, columna;
	while (fila >=1)
	{
		columna = 1;

		while(columna <=10)
		{
			printf("%s" , fila %2 ? "<" : ">");
			columna = columna +1;
		}

		fila= fila-1;
		printf("\n");

}
}
