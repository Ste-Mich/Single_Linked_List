#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct listitem
{
    int data;
    struct listitem *next;
} LISTITEM;

int main()
{
    LISTITEM *head, *temp;

    head = NULL;

    for (size_t i = 0; i < 5; i++)
    {
        temp = malloc(sizeof(LISTITEM));
        temp->data = i;
        temp->next = head;

        head = temp;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("The current data is %d, current location is %p, next is %p \n", temp->data, temp, temp->next);
        temp = temp->next;
    }
    printf("\n\nIteration one done\n\n");
    temp = head;
    while (temp != NULL)
    {
        printf("The current data is %d, current location is %p, next is %p \n", temp->data, temp, temp->next);
        temp = temp->next;
    }
    printf("\n\nIteration two done\n\n");
    temp = head;
    while (temp != NULL)
    {
        printf("The current data is %d, current location is %p, next is %p \n", temp->data, temp, temp->next);
        temp = temp->next;
    }
    printf("\n\nIteration three done\n\n");

    return 0;
}
