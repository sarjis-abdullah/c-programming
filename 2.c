# include <stdio.h>
int main()
{
    char c;
    // printf("Give a width: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("Upper case");
    }
    else if (c >= 'a' && c <= 'z')
    {
                printf("lower case");

    }
    else
    {
                printf("Not founde in letter");

    }
    

    // printf("Give a height: ");
    // scanf("%f", &height);

    // printf("Area is: %.1f\n", height * width);
    return 0;
}