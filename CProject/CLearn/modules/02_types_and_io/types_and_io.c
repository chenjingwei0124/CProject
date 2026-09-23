#include <stdio.h>

int main(void)
{
    int age = 20;
    unsigned int score = 95U;
    long population = 1000000L;
    float temperature = 26.5F;
    double pi = 3.141592653589793;
    char grade = 'A';
    char name[50] = "学习者";

    printf("姓名：%s\n", name);
    printf("年龄：%d，分数：%u，等级：%c\n", age, score, grade);
    printf("人口：%ld，温度：%.1f，圆周率：%.5f\n",
           population, temperature, pi);

    /* sizeof 的结果类型是 size_t，因此用 %zu 输出。 */
    printf("int 占 %zu 字节，double 占 %zu 字节。\n",
           sizeof(int), sizeof(double));

    /* fgets 会限制读取长度，比不限制长度的输入方式更安全。 */
    printf("请输入你的昵称：");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        printf("你好，%s", name);
    } else {
        fprintf(stderr, "读取输入失败。\n");
        return 1;
    }

    return 0;
}
