#include <stdio.h>

int main() {
    int a;
    printf("Enter one number:");
    scanf("%d", &a);
    
    a += 5;
    printf("After add 5: %d\n", a);
    
    a -= 2;
    printf("After sub 2: %d\n", a);
    
    a *= 5;
    printf("After mul 5: %d\n", a);
    
    a /= 3;
    printf("After div 3: %d\n", a);
    
    a %= 4;
    printf("After mod 4: %d\n", a);
    
    return 0;
}
