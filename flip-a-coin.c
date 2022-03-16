#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 int main (){
 	printf("Press any key to flip a coin! \n\n");
 	int x;
 	scanf("%d",x);
 	srand(time(0));
 	short y = (rand() % 500) + 1;
 		y >= 250 ? printf("Heads!\n") : printf("Tails!\n");
 	return 0;}
