#include <stdio.h>
int main()
{
    int i, j, rows=5;
    printf("Enter number of rows: ");
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
