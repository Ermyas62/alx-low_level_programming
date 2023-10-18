#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
