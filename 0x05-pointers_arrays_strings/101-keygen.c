#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "main.h"
/**
 * GeneratePassword - Function used to generate randompassword
 * @l - lenght of desired password
 * Return: 1
 */
void GeneratePassword(int l)
	{
		int a = 0;
		int random = 0;
		
		srand((unsigned int)(time(NULL)));
		
		char num[] = "0123456789";
		char alph[] = "abcdefghijklmnopqrstuvwxyz";
		char ALPH[] = "ABCDEFGHIJKLOMNPQRSTUVWXYZ";
		char spes[] = "!@#$%^&*?_";
		char pass[l];

		random = rand() % 4;

		for (a = 0; a < l; a++)
			{
				if (random == 3)
					{
						pass[a] = ALPH[rand() % 26];
						random = rand() % 4;
						print("%c", pass[a]);
					}
				else if (random == 2)
					{
						pass[a] = alph[rand() % 26];
						random = rand() % 4;
						printf("%c", pass[a]);
					}
				else if (random == 1)
					{
						pass[a] = num[rand() % 10];
						random = rand() % 4;
						printf("%c", pass[a]);
					}
				else
					{
						pass[a] = spes[rand() % 9];
						random = rand() % 4;
						printf("%c", pass[a]);
					}
			}
	}
/**
 * main - the main function to run
 * Return: 0
 */

int main(void)
	{
		int l = 15;
		GeneratePassword(l);
		return (0);
	}
