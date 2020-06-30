#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *n;
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 83746;
    head->next = second;
    second->data = 34;
    second->next = third;
    third->data = 5995;
    third->next = NULL;
    n = head;
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
}
