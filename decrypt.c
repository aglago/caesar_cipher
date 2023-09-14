#include "main.h"

/**
 * decrypt - decryption function
 * @cipher_txt: encrypted message to be decrypted
 * @key: number of shifts
 */
void decrypt (char *cipher_txt, int key)
{
	int i = 0;
	char base;
	char plain_txt;

	printf("Your cipher text is: ");
	for (; cipher_txt[i] != '\0'; i++)
	{
		/*if character is a letter*/
		if (isalpha(cipher_txt[i]))
		{
			base = islower(cipher_txt[i]) ? 'a' : 'A';
			plain_txt = ((cipher_txt[i] - base - key) % 26 + 26) % 26 + base;
			putchar(plain_txt);
		} else
		{
			putchar(cipher_txt[i]);
		}
	}
	printf("\n");
}
