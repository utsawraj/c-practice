#include <stdio.h>

int main() {
    int num;
    
    printf("Ek number dalo: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d Even hai", num);
    } else {
        printf("%d Odd hai", num);
    }
    
    return 0;
}