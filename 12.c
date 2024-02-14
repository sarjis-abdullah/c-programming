#include <stdio.h>
#include <string.h>

#define DEST_SIZE 40

void slice(char arr[], int n, int m);
void salting();
int main()
{
    slice("Sarjis", 0, 6);
    return 0;
}

void slice(char arr[], int n, int m){
    char newArray[100];
    int  j = 0;
    for (int i = n; i <= m; i++, j++)
    {
        newArray[j] = arr[i];
    }
    newArray[j] = '\0';
    printf("%s", newArray);
    // return newArray;
}

void salting(){
    char n1[4];
    char password[100] = "test";
    scanf("%s", password);
    char newPassword[100];

    char salt[10] = "123";

    strcpy(newPassword, password);
    strcat(newPassword, salt);

    printf("%s\n", newPassword);
}