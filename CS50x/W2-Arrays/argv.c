#include <cs50.h>
#include <stdio.h>

// int main(int argc, string argv[])
// {
//     if (argc == 2)
//     {
//         printf("hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("hello, world\n");
//     }
// }

/*It turns out that our main function also returns an integer value called an exit status. 
By default, our main function returns 0 to indicate nothing went wrong, but we can write a program to return a different value:*/

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0;
}
