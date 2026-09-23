#include <stdio.h>

static void swap(int *left, int *right)
{
    int temporary = *left;
    *left = *right;
    *right = temporary;
}

static int add(int a, int b)
{
    return a + b;
}

int main(void)
{
    int value = 42;
    int *pointer = &value;

    printf("value = %d\n", value);
    printf("value 的地址 = %p\n", (void *)pointer);
    printf("通过指针读取 = %d\n", *pointer);

    *pointer = 100;
    printf("通过指针修改后 value = %d\n", value);

    int x = 3;
    int y = 7;
    swap(&x, &y);
    printf("交换后：x = %d, y = %d\n", x, y);

    int numbers[] = {10, 20, 30};
    int *cursor = numbers;
    for (size_t i = 0; i < 3; ++i) {
        printf("numbers[%zu] = %d\n", i, *(cursor + i));
    }

    /* 函数指针可以把函数当作值来选择和传递。 */
    int (*operation)(int, int) = add;
    printf("函数指针调用结果：%d\n", operation(6, 4));

    return 0;
}
