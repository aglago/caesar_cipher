#include "main.h"

/**
 * clear - used to clear standard input
 * Return: nothing
 */
void clear()
{
	while(getchar() != '\n')
	{}
}


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

void start ()
{
	char *text = malloc(BUF);
	char *option = malloc(BUF);
	int key = 0;
	int scanf_return = 0;

	while (1)
	{
		printf("Enter a plain text or cipher text: ");
		scanf_return = scanf("%s", text);
		if (scanf_return == -1)
		{
			printf("Invalid plain text ! Enter a valid plain text\n");
			clear();
			continue;
		}

		printf("Encrypt or decrypt: ");
		scanf_return = scanf("%s", option);
		if (scanf_return == -1)
		{
			printf("Invalid plain text ! Enter a valid plain text\n");
			clear();
			continue;
		}

		printf("What is the key: ");
                scanf_return = scanf("%d", &key);
                if (scanf_return == -1)
                {
                        printf("Invalid plain text ! Enter a valid plain text\n");
                        clear();
                        continue;
                }

		operation(option, key, text);

		free(text);
		free(option);
	}
}

/**
 * main - program that can encrypt and decrypt plain text
 * Return: always 0 (success)
 */
int main (void)
{
	start();

	return (0);
}
