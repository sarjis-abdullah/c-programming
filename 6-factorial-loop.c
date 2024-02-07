#include <stdio.h>
#include <math.h>

int main() {
    int n =3, count = 1;
    
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("%d", sum);
    
    

    

    return 0;
}
