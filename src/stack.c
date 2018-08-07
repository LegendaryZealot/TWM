#include "define.h"
#include "stack.h"

int stack[STACKSIZE];
int ptr=0;

int push(int value)
{
    if(STACKSIZE==ptr+1)
    {
        return -1;
    }
    stack[ptr]=value;
    ptr++;
    return 0;
}

int pop()
{
    if(0==ptr)
    {
        return -1;
    }
    ptr--;
    return stack[ptr];
}