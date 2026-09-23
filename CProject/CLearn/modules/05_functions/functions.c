#include <stdio.h>

/* 函数声明让编译器提前知道函数的名称、参数和返回类型。 */
static int max_of(int left, int right);
static unsigned long long factorial(unsigned int n);

int main(void)
{
    printf("8 和 13 中较大的是：%d\n", max_of(8, 13));

    for (unsigned int i = 0; i <= 10; ++i) {
        printf("%u! = %llu\n", i, factorial(i));
    }

    return 0;
}

static int max_of(int left, int right)
{
    return left > right ? left : right;
}

/* 递归函数必须有终止条件，否则会不断调用自身。 */
static unsigned long long factorial(unsigned int n)
{
    if (n <= 1U) {
        return 1ULL;
    }
    return n * factorial(n - 1U);
}
