
/*
Driver for Game of Life assignment in CPSC 223 Fall 2023

Author: Weixing Zhang 
*/
#include <stdio.h>
#include <stdlib.h>
#include "life.h"
#include "helpers.h"


// TO STUDENT: Do not change this definition!
#ifndef SIZE
#define SIZE 10
#endif
// End modification restriction

int main(int argc, char *argv[])
{ 
    int time_steps = atoi(argv[1]);
    char init[SIZE];
    for (int i=0; i < SIZE; i++)
    {
        init[i]=argv[2][i];
        }
    int arr_int[SIZE];
    int arr_next[SIZE];
    for (int i = 0; i< SIZE; i++)
    { 
        arr_int[i]= init[i] - '0';
    }
    for (int i=0; i< SIZE; i++)
    {
        arr_next[i]=arr_int[i];
    }
    
    print_initial(arr_int, SIZE);
/*Game Instructions*/
for (int j=0; j<time_steps; j++)
{
    for (int i = 0; i < SIZE; i++)
    {   if (isAlive(arr_int, i, SIZE)==false)/*if dead*/
            {
                if (i==0)/*if its the first index, check if 2nd is alive, then becomes alive*/
                {
                    if (isAlive(arr_int, 1, SIZE)==true)
                    {
                        arr_next[0]= 1;
                    }
                
                }
                else if (i==SIZE-1)/*if last index, check if second to last index is alive then make it alive*/
                {
                    if (isAlive(arr_int, SIZE-2, SIZE)==true)
                    {
                        arr_next[SIZE-1]= 1;
                    }
                    
                }
                else if (isAlive(arr_int, i+1, SIZE)==true || isAlive(arr_int, i-1, SIZE)==true)/*if before and end are alive then it becomes alive*/
                {
                    arr_next[i]=1;
                }
                
            }
            if (shouldDie(arr_int,i,SIZE)==true)
            {
                arr_next[i]=0;
            }   

            
}
print_generation(arr_next, j+1, SIZE);
for (int i=0; i< SIZE; i++)
    {
        arr_int[i]=arr_next[i];
    }
}

}
