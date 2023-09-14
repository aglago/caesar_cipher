#ifndef M_H
#define M_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define BUF 1024

void start ();
void operation (char *option, int key, char *text);
void decrypt (char *cipher_txt, int key);
void encrypt (char *plain_txt, int key);
void clear();
#endif
