

#include "helpers.h"
#include <stdio.h>

void print_initial(int field[], size_t size)
{
    printf("%-16s[ ", "Initial Values");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", field[i]);
    }
    printf("]\n");
}

void print_generation(int field[], unsigned int gen, size_t size)
{
    printf("Step %-10d [ ", gen);
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", field[i]);
    }
    printf("]\n");
}
