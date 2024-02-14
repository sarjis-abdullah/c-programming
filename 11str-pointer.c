#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40

int main()
{
    char n1[4];
    char ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        n1[i] = ch;
        i++;
        if (i == 4)
        {
            break;
        }
        
    }
    n1[i] = '\0';

puts(n1);
    // printf("hello: %d %s", i, n1);
    return 0;
}