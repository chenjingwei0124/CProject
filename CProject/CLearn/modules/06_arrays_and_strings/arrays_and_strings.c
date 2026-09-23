#include <stdio.h>
#include <string.h>

int main(void)
{
    int scores[] = {88, 92, 76, 95, 84};
    size_t count = sizeof(scores) / sizeof(scores[0]);
    int total = 0;

    for (size_t i = 0; i < count; ++i) {
        total += scores[i];
    }
    printf("平均分：%.1f\n", (double)total / count);

    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (size_t row = 0; row < 2; ++row) {
        for (size_t column = 0; column < 3; ++column) {
            printf("%d ", matrix[row][column]);
        }
        putchar('\n');
    }

    /* C 字符串以空字符 '\0' 结尾。 */
    char greeting[32] = "Hello";
    const char suffix[] = ", C!";
    strncat(greeting, suffix, sizeof(greeting) - strlen(greeting) - 1U);
    printf("%s，长度为 %zu。\n", greeting, strlen(greeting));

    if (strcmp(greeting, "Hello, C!") == 0) {
        puts("两个字符串内容相同。");
    }

    return 0;
}
