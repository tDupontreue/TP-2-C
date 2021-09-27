#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
int main(int argc, char* argv[])
{
	int a; int b; int c;

	printf("Merci de rentrer le premier chiffre");
	scanf("%d", &a);
	printf("Merci de rentrer le second chiffre");
	scanf("%d", &b);
	printf("Merci de rentrer le troisieme chiffre");
	scanf("%d", &c);

	if (a<b && b>c)
	{
		printf("Le chiffre le plus grand est B\n");

		if (a > c)
		{
			printf("ordre croissant : %d %d %d", c, b, a);
		}

	}

	else if (c<a && a>b)
	{
		printf("le chiffre le plus grand est A\n");

		if (c > b)
		{
			printf("ordre croissant : %d %d %d", b, a, c);
		}
	}

	else if (b<c && c>a)
	{
		printf("Le chiffre le plus grand est C\n");
	}

	

	return 0;

}