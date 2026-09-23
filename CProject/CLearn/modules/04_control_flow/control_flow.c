#include <stdio.h>

int main(void)
{
    int score = 86;

    if (score >= 90) {
        puts("等级：优秀");
    } else if (score >= 60) {
        puts("等级：合格");
    } else {
        puts("等级：需要继续努力");
    }

    int weekday = 3;
    switch (weekday) {
        case 1:
            puts("星期一");
            break;
        case 2:
            puts("星期二");
            break;
        case 3:
            puts("星期三");
            break;
        default:
            puts("其他日期");
            break;
    }

    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            continue; /* 跳过本次循环。 */
        }
        if (i == 9) {
            break; /* 立即结束整个循环。 */
        }
        sum += i;
    }
    printf("跳过 5、在 9 处停止后的总和：%d\n", sum);

    int countdown = 3;
    while (countdown > 0) {
        printf("倒计时：%d\n", countdown--);
    }

    return 0;
}
