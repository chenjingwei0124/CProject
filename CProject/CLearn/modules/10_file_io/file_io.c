#include <stdio.h>

int main(void)
{
    const char *filename = "demo_output.txt";
    FILE *output = fopen(filename, "w");
    if (output == NULL) {
        perror("无法打开写入文件");
        return 1;
    }

    fprintf(output, "C 语言文件操作示例\n");
    fprintf(output, "第一行数据：%d\n", 42);
    if (fclose(output) != 0) {
        perror("关闭写入文件失败");
        return 1;
    }

    FILE *input = fopen(filename, "r");
    if (input == NULL) {
        perror("无法打开读取文件");
        return 1;
    }

    char line[128];
    puts("文件内容：");
    while (fgets(line, sizeof(line), input) != NULL) {
        fputs(line, stdout);
    }

    if (ferror(input)) {
        perror("读取文件失败");
        fclose(input);
        return 1;
    }
    fclose(input);

    return 0;
}
