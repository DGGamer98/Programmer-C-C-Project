#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int len;
char car[] = "0123456789abcdefghijklmnoqprstuvwyzxABCDEFGHIJKLMNOQPRSTUYWVZX!@#$^&*?";

void genera_password(int size){
    int car_dim = sizeof(car)/sizeof(car[0]) -1;
    for(int i=0; i<size; i++){
        printf("%c", car[rand() % (car_dim)]);
    }
}

int main(){
    srand(time(NULL));

	printf("Lunghezza password: ");
    scanf("%d", &len);

    printf("\nPassword generata: ");
    genera_password(len);

	return 0;
}

