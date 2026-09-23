#include <stdio.h>

typedef enum {
    LEVEL_BEGINNER,
    LEVEL_INTERMEDIATE,
    LEVEL_ADVANCED
} Level;

typedef struct {
    char name[32];
    int age;
    double score;
    Level level;
} Student;

static const char *level_name(Level level)
{
    switch (level) {
        case LEVEL_BEGINNER:
            return "初级";
        case LEVEL_INTERMEDIATE:
            return "中级";
        case LEVEL_ADVANCED:
            return "高级";
        default:
            return "未知";
    }
}

static void print_student(const Student *student)
{
    printf("%s：%d 岁，%.1f 分，%s\n",
           student->name,
           student->age,
           student->score,
           level_name(student->level));
}

int main(void)
{
    Student students[] = {
        {"小林", 20, 91.5, LEVEL_INTERMEDIATE},
        {"小周", 22, 96.0, LEVEL_ADVANCED}
    };
    size_t count = sizeof(students) / sizeof(students[0]);

    for (size_t i = 0; i < count; ++i) {
        print_student(&students[i]);
    }

    return 0;
}
