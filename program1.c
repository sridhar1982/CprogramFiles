#include <stdio.h>
//Added a comment here

int main()
{
    int i,j;
    int *p;   /* a pointer to an integer */
    printf("%d %d\n", p, &i);
    p = &i;
    printf("%d %d\n", p, &i);
    return 0;
}
