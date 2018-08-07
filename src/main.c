#include <stdio.h>

#include "stack.h"

int main(int argc, char const *argv[])
{
    push(1);
    push(2);
    push(3);
    printf("%d\t",pop());
    printf("%d\t",pop());
    push(4);
    printf("%d\t",pop());
    printf("%d\t",pop());
    printf("done!\n");
    return 0;
}
