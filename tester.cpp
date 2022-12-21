/*CALCOLO AREA RETTANGOLO*/
#include <stdio.h>
#include <stdlib.h>

// dichiarazione variabile globale 

int base;
int altezza;
int area;

int main(void)
{
	
	//stampo il risultato
	printf("\nCALCOLO AREA RETTANGOLO \n\n");
	printf ("Valore base: ");
	scanf("%d",&base);
	printf("Valore altezza: ");
	scanf("%d",&altezza);
	
	//area = bsae*altezza
	area= base*altezza;
	printf("Base: %d\n", base);
	printf("Altezza %d\n", altezza);
	printf("Area %d\n\n", area);
	
	printf("Inizio esercizio\n\n");
	
	printf("base=%d, altezza=%d , area=%d\n\n",base,altezza,area);
	printf("%d%d%d\n\n",base,altezza,area);
	printf("|000000%d|000000%d|000000%d|\n\n",base,altezza,area);
	printf("|      %d|      %d|      %d|\n\n",base,altezza,area);
	printf("|%6d|%6d|%6d|\n\n",base,altezza,area);
	printf("|%4d|%4d|%4d|\n\n",base,altezza,area);
	printf("|%15d|%15d|%15d|\n\n",base,altezza,area);
	printf("|%-15d|%15d|%-15d|\n\n",base,altezza,area);
	system("PAUSE");
	
	
}
	

