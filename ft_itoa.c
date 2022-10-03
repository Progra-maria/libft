
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*this function handles the min int value*/
static char* ft_atomi(void)
{
    char *min_int;

    min_int = (char *)ft_calloc(12, sizeof(int));
    if (!min_int)
        return (NULL);
    min_int = "-2147483648";
    //min_int[12] = '\0';
    return (min_int);
}
/*this function takes the int value and converts to absolute number*/
static int ft_abs(int a)
{   
    long signed int num;

    num = a;
    if (num >= 0)
        return (num);
    return (-num);
}
/*This function returns the number of digits of a given int value, sign included*/
static int ft_ilen(int a)
{
    int i;

    i = 0;
    if (a == 0)
        return (2);
    if (a < 0)
        i++;
    while (a)
    {
        a = a / 10;
        i++;
    }
    i++;
    return (i);
}
/*This function represents in a by-malloc generated string of every
int value*/ 
char* ft_itoa(int n)
{
    int i;
    int absn;
    char *str;

    if(n < -2147483648 || n > 2147483647)
        return (NULL);
    if (n == -2147483648)
        return(ft_atomi());
    i = ft_ilen(n);
    absn = ft_abs(n);
    str = (char *)malloc((int)i);
    if (!str)
        return (NULL);
    if (n == 0)
        {
            str[0] = '0';
            str[1] = '\0';
            return (str);
        }
    str[--i]= '\0';
    i--;
    while (absn && i >= 0)
    {
        str[i--] = 48 + (absn % 10);
        absn = absn / 10;
    }
    if (n < 0) {
        str[i--] = '-';
    }
    return (str);
}

// int main(void)
// {
//     printf("%s", ft_itoa(-2147483647 -1));
//     //printf("%d\n", (-15 % 10));

//     return(0);
// }