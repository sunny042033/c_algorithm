#include <stdio.h>

int main() {
    double x, signValue;
    
    
    printf("������x��ֵ: ");
    scanf("%lf", &x);
    
    // ����sign(x)��ֵ
    if (x < 0) {
        signValue = -1;
    } else if (x > 0) {
        signValue = 1;
    } else {
        signValue = 0;
    }
    
    printf("sign(x) = %d\n", signValue);

    return 0;
}