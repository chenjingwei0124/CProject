#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    size_t count = 5;
    int *numbers = malloc(count * sizeof(*numbers));
    if (numbers == NULL) {
        fprintf(stderr, "内存分配失败。\n");
        return 1;
    }

    for (size_t i = 0; i < count; ++i) {
        numbers[i] = (int)(i + 1U) * 10;
    }

    size_t new_count = 8;
    int *resized = realloc(numbers, new_count * sizeof(*numbers));
    if (resized == NULL) {
        /* realloc 失败时，原来的 numbers 仍然有效，必须释放。 */
        free(numbers);
        fprintf(stderr, "扩展内存失败。\n");
        return 1;
    }
    numbers = resized;

    for (size_t i = count; i < new_count; ++i) {
        numbers[i] = (int)(i + 1U) * 10;
    }
    for (size_t i = 0; i < new_count; ++i) {
        printf("%d%s", numbers[i], i + 1U == new_count ? "\n" : ", ");
    }

    free(numbers);
    numbers = NULL; /* 避免继续误用已经释放的地址。 */
    return 0;
}
