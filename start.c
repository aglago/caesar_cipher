#include "main.h"

/**
 * start - first step
 */
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
