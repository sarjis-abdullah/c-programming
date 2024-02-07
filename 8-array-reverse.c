#include <stdio.h>
#include <math.h>

int main() {
    int marks[] = {1,2,3,4,9, 0, 7};
    int l = sizeof(marks)/sizeof(marks[0]); 
    for (int i = 0; i < l/2; i++)
    {
        int f = marks[i];
        int s = marks[l-i-1];
        marks[i] = s;
        marks[l-i-1] = f;
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d ", marks[i]);
    }
    return 0;
}