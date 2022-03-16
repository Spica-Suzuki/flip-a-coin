#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 int main (){
 	printf("Yazı-tura atmak için herhangi bir tuşa basınız \n\n");
 	int x;
 	scanf("%d",x);
 	srand(time(0));
 	short y = (rand() % 500) + 1;
 		y >= 250 ? printf("yazı geldi\n") : printf("tura geldi\n");
 	return 0;}
