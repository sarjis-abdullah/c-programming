#include <stdio.h>
#include <string.h>

int main()
{
    char names[40];

    

    
    scanf("%s", names);
    int n = strlen(names);
    printf("%d\n", n);
    return 0;
}

/*
int main()
{
    char names[] = "Sarjis", c = 0;

    for (int i = 0; names[i] != '\0' ; i++)
    {
        c++;
        printf("%c", names[i]);
    }

    printf("\n");
    printf("%d\n", c);
    return 0;
}
*/