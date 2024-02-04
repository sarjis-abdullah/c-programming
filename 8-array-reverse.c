#include <stdio.h>
#include <math.h>

int fb(int a);

int main() {
    int marks[] = {1,2,3,4,9};
    int l = 5; 
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
    
    
    

    // for (int i = 1 ; i <= n; i++)
    // {
    //     if (n == 1)
    //     {
    //         count += n;
    //         continue;
    //     }
    //     if (n == 0)
    //     {
    //         break;
    //     }
        
    //     count = (n -1) + (n-2);
    //     // 0 1 1 2 3 5 8
    //     /* code */
    // }
    // printf("%d\n", count);
    
    
    
    

    

    return 0;
}

int fb(int a){
    // printf("%d\n", a);
    if(a == 1 || a== 0){
        return a;
    }
    int s = fb(a - 1) + fb(a - 2);
    // printf("%d\n", s);
    return s;
}