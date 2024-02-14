#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40

int main()
{
    // char names[] = {'a', 'b', 'd', 'u', '\0'};
    // char names[] = {'a', 'b', 'd', 'u'};
    char src[20];
    char dest[DEST_SIZE];
    

    fgets(src, 20, stdin);
    // strncat(dest, src, 5);
    // printf("%s", dest);
    puts(src);

    // scanf("%c", names);
    // int n = strlen(names);
    // printf("%s %d\n", names, n);
    return 0;
}