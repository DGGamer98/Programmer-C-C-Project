#include<stdio.h>

char a;

int main(void)
{
	printf("imettere il codice corretto\n\n");
	printf("Per verificare che tu non sia un robot\n\n");
	
		
	    scanf("%c", &a);
	
 //   printf("\n \nda 1 a 100\n\n");
//	printf("Tentativo numero 1= ");
//	scanf("%d",&a);
//	printf("\nTentativo numero 2=");
  //  scanf("%d",&a);
  //  printf("\n Tentativo numero 3=");
   // scanf("%d",&a);
    //	printf("\nTentativo numero 4=");
   // scanf("%d",&a);
	
	switch(a) {
		case'2':
		case'1':
		case'5':
		printf ("Codice corretto BEN VENUTO\n\n");
		break;
		case'4':
		case'8':
		case'9':
		printf ("Codice errato le stiamo mandato la POLIZIA a casa sua");
		break;	
		
		default:
			printf("Valore non riconosciuto stupidooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo ciao");
	//	printf("\n\n Giochiamo Insieme, indovina un numero");
		
   
	//VERIFICA DELLA  CONDIZIONE
//	if(a)
//	if(a)
//	 printf("\n\nHAI VINTO!!!");  
//	else
 //    printf("\n\nHAI PERSO DOWN HAHAHAHAHAHAHAHAHA XD XD XD XD XD XD XD XD DOWN!!!");
   // else
    //	printf("\n\nHAI VINTO");
	
	  // printf("\n\nFINE DEL GIOCO");
	}
	
}
