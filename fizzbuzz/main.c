#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    for(x = 0; x < 101; x++)
    {
        if(x % 15 == 0)
        {
            printf("fizzbuzz  \n");
        }
        else if(x % 3 == 0)
        {
            printf("fizz  \n");
        }
        else if (x % 5 == 0)
        {
            printf("buzz  \n");
        }
        else
        {
            printf("%d  \n", x);
        }


    }
    return 0;
}
