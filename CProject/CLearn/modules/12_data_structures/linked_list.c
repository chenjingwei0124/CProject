#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

static Node *push_front(Node *head, int value)
{
    Node *node = malloc(sizeof(*node));
    if (node == NULL) {
        return NULL;
    }
    node->value = value;
    node->next = head;
    return node;
}

static void print_list(const Node *head)
{
    for (const Node *current = head; current != NULL; current = current->next) {
        printf("%d%s", current->value, current->next == NULL ? "\n" : " -> ");
    }
}

static void free_list(Node *head)
{
    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
}

int main(void)
{
    Node *head = NULL;

    for (int value = 1; value <= 5; ++value) {
        Node *new_head = push_front(head, value);
        if (new_head == NULL) {
            fprintf(stderr, "创建链表节点失败。\n");
            free_list(head);
            return 1;
        }
        head = new_head;
    }

    puts("链表内容：");
    print_list(head);
    free_list(head);

    return 0;
}
