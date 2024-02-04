#include <stdio.h>
#include <math.h>

int main() {
    int n =5, count = 1;
    // int copyN = n;
    // while (copyN != 0)
    // {
    //     copyN /= 10;
    //     count++;
    // }
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }
    printf("%d", sum);
    
    

    

    return 0;
}
