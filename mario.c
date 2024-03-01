#include <cs50.h>
#include <stdio.h>

int get_size (void);
void print_grid (int size);

int main(void)
{
    //Get size of size for grid
int n = get_size();

    //Print grid of bricks
int print_grind(n);
}


int get_size (void)
{
    int; n
    do
{
    n = get_int("Size: ");
}
    while (n < 1);
    return n;
}

void print_grid (int size)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
    }
    {
        printf("#");
    }
    {
        printf("\n");
    }
}

