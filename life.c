#include <stdbool.h>
#include <stdlib.h>

bool isAlive(int field[], size_t i, size_t size)
{if (field[i]==1)
    {
        return true;
        }
else 
    {
        return false;
        }
}
bool shouldDie(int field[], size_t i, size_t size)
{if (i==0 || i==(size-1))
    {
        return false;
        }
    else if (isAlive(field, i, size)== true && isAlive(field,i-1,size)==true && isAlive(field, i+1, size)== true)
        {
            return true;
            }
        return false;
}

