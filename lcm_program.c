#include<stdio.h>
int main()
{
    int max, a,b;
    printf("Enter two values:\n");
    scanf("%d %d", &a,&b);

    max = (a > b) ? a : b;

    while(1)
    {
        
        if( max % a == 0 && max % b ==0)
        {
            printf("lcm of %d and %d = %d", a,b,max);
            break;
        }
        ++max;
    }

    return 0;

}