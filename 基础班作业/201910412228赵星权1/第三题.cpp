#include <stdio.h>

struct list_node {
    int index;
    struct list_node* next;
};
struct list
{
    struct list_node* head;
    struct list_node* tail;
};
void reverse(struct list_node* head)
{
    if (NULL == head || NULL == head->next)
        return;
    reverse(head->next);
    head->next->next = head;
    head->next = NULL;
}
int main()
{
    int i = 0;
    struct list list = { NULL, NULL };
    struct list_node node[10] = { 0 };
    struct list_node* p;
    for (i = 0; i < 9; i++)
    {
        node[i].index = i;
        node[i].next = &node[i + 1];
    }
    node[9].index = 9;
    list.head = node;
    list.tail = node + 9;

    reverse(list.head);
    for (p = list.tail; p; p = p->next)
    {
        printf("%d \n", p->index);
    }
    return 0;
}