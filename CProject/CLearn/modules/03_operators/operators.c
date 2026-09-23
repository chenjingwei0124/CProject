#include <stdio.h>

int main(void)
{
    int a = 17;
    int b = 5;

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d（整数除法）\n", a / b);
    printf("a %% b = %d（余数）\n", a % b);
    printf("浮点除法 = %.2f\n", (double)a / b);

    printf("a > b 的结果：%d\n", a > b);
    printf("a > 0 且 b > 0：%d\n", a > 0 && b > 0);
    printf("a 是偶数或 b 是奇数：%d\n", a % 2 == 0 || b % 2 != 0);

    /* 位运算直接操作整数的二进制位。 */
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a << 1 = %d\n", a << 1);

    return 0;
}
