#include "main.h"

/**
 * encrypt - encrypt function
 * @plain_txt: text to be encrypted
 * @key: number of shifts
 */
void encrypt (char *plain_txt, int key)
{
	int i = 0;
	char base;
	char cipher_txt;

	printf("Your cipher text is: ");
	for (; plain_txt[i] != '\0'; i++)
	{
		/*if character is a letter*/
		if (isalpha(plain_txt[i]))
		{
			base = islower(plain_txt[i]) ? 'a' : 'A';
			cipher_txt = ((plain_txt[i] - base + key) % 26 + 26) % 26 + base;
			putchar(cipher_txt);
		} else
		{
			putchar(plain_txt[i]);
		}
	}
	printf("\n");
}
