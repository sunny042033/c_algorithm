#include <stdio.h>

int main() {
    double x, signValue;
    
    
    printf("请输入x的值: ");
    scanf("%lf", &x);
    
    // 计算sign(x)的值
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