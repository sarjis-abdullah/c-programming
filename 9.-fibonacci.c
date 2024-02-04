#include <stdio.h>
#include <math.h>

int fb(int a);
void fbUsingRecursion();
void fbUsingLoop();

int main()
{
    fbUsingRecursion();
    printf("\n");
    fbUsingLoop();
    return 0;
}

int fb(int a)
{
    return a < 2 ? a : fb(a - 1) + fb(a - 2);
}
void fbUsingRecursion()
{
    int n = 8;

    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", fb(i));
    }
}
void fbUsingLoop()
{
    int l = 9;
    int n[l];
    n[0] = 0;
    n[1] = 1;

    for (int i = 2; i < l; i++)
    {
        n[i] = n[i - 1] + n[i - 2];
        // printf("%d\t", fb(i));
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d\t", n[i]);
    }
}
