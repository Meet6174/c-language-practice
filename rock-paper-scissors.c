#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int p, c = rand() % 3;
    printf("Choose 0 for rock, 1 for paper and 2 for scissors \n");
    scanf("%d", &p);
    printf("Computer chose %d\n", c);

    if (p == 0 && c == 0)
    {
        printf("Its a Draw!\n");
    }
    else if (p == 0 && c == 1)
    {
        printf("You Win!\n");
    }
    else if (p == 0 && c == 2)
    {
        printf("You Lose!\n");
    }
    else if (p == 1 && c == 0)
    {
        printf("You Lose!\n");
    }
    else if (p == 1 && c == 1)
    {
        printf("Its a Draw!\n");
    }
    else if (p == 1 && c == 2)
    {
        printf("You win!\n");
    }
    else if (p == 2 && c == 0)
    {
        printf("You win!\n");
    }
    else if (p == 2 && c == 1)
    {
        printf("You Lose!\n");
    }
    else if (p == 2 && c == 2)
    {
        printf("Its a Draw!\n");
    }
    else{
        printf("Something went wrong!");
    }

    return 0;
}