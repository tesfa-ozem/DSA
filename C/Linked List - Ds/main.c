#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    void *next;
    int data;
} Node;

Node *head = NULL;

// Print linked list
void printList(Node *n)
{
    while (n != NULL)
    {
        printf(" %d ", n->data);
        n = n->next;
    }
    printf("\n");
}

// Insert operation
void insertNode(int data, Node *n)
{
    if (n == NULL)
    {
        // create memory for the new node
        Node *newNode = (Node *)malloc(sizeof(Node));
        head = newNode;
        head->data = data;
    }
    else
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        while (n->next != NULL)
        {

            n = n->next;
        }
        n->next = newNode;
        newNode->data = data;
    }
}
// Search

// Get the size of the linkedlist

int getSize(Node *h)
{
    if (h == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + getSize(h->next);
    }
}

// return the value at nth index

Node* value_at(int index, Node *h)
{
    int postion = 0;
    Node *temp = h;
    while (h != NULL)
    {
        if (postion != index)
        {
            temp = temp->next;
        }else
        {
            return temp;
        }
        postion++;
        printf("current postion = %d \n\n", postion);
    }

    
}
int main(int argc, char const *argv[])
{
    // int val = 2;
    // printf("%p", &val);
    insertNode(2, head);
    insertNode(3, head);
    insertNode(4, head);
    insertNode(5, head);
    insertNode(6, head);
    // Node * val = value_at(1,head);
    printList(head);
    printf("List length = %d \n\n", getSize(head));
    printf("Index of 2 is = %d", value_at(2,head)->data);
    return 0;
}
