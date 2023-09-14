#include "main.h"

/**
 * operation - function to chose the operation
 * @option: encrypt or decrypt
 * @text: text to be encryptied or decrypted
 */
void operation (char *option, int key, char *text)
{
	if (strcmp (option, "encrypt") == 0)
	{
		encrypt(text, key);
	}
	else if (strcmp (option, "decrypt") == 0)
		decrypt(text, key);
	else
		printf("Invalid operation, kindly enter the right operation: encrypt or decrypt");

}
