#include "memory.h"

static char allocbuf [ALLOCSIZE];       /* storage for alloc */
static char *allocp = allocbuf;         /* next free position, initializing with the add of allocbuf */

char * alloc(int n)
{
    if(allocbuf + ALLOCSIZE - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    }
    return 0;
}

void afree(char *p)
{
    if( p >= allocbuf && p < allocbuf + ALLOCSIZE)
    {
        allocp = p;
    }
}