#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two integers a and b: ");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n\n", a, b);
    
    int and_result = a & b;
    int xor_result = a ^ b;
    int final_result = and_result | xor_result;
    
    printf("Operation 1: a & b = %d\n", and_result);
    printf("Operation 2: a ^ b = %d\n", xor_result);
    printf("Operation 3: (a & b) | (a ^ b) = %d | %d = %d\n", and_result, xor_result, final_result);
    
    printf("\nFinal result: %d\n", final_result);
    
    return 0;
}
