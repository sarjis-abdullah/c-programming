#include <stdio.h>
#include <math.h>

int sum(float a);
int main() {
    int n =5, count = 1;
    printf("%d\n", sum(5));
    
    
    

    

    return 0;
}

int sum(float a){
    if(a == 1){
        return 1;
    }
    int s = sum(a - 1) * a;
    return s;
}