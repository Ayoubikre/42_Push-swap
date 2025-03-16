#include "./Mandatory/main.h"

int main(int c, char** ar)
{
    int i=1;
    // while(i<c)
    // {
    //     ft_valid(ar[i]);
    //     printf(" arg %d is valid \n ------\n",i);
    //     i++;
    // }

    printf(" arg %zu  \n ------\n", ft_counts(ar[1], ' '));
}