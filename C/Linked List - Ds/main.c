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
// Insert operation at nth index

void insertNodeAtIndex(int data, Node *n,int index)
{
    int count = 1;
    Node* prev;
    Node* next;
    if(index==0){
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = n;
        head = newNode;
    }else{
        while (next!=NULL)
        {
            
            prev = n;
            next = prev->next;
            if(count!=index)
            {
               n = n->next;
            }else
            {
                Node *newNode = (Node *)malloc(sizeof(Node));
                prev->next = newNode;
                newNode->next = next;
                newNode->data = data;
            }
            count++;
        }
        
    }
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
// Pop item from front

int popFront(Node *h)
{
    int value = h->data;
    head = h->next;
    free(h);

    return value;
}

// Pop item from back

int popBack(Node *h)
{
    Node* temp;
    temp = h;
    Node * prev;
    int value;
    while (temp!=NULL)
    {
        if(temp->next!=NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        else
        {
            prev->next = NULL;
            value = temp->data;
            free(temp);
            return value;
        }
        

    }
    // 
    
    
}

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
    // popFront(head);
    popBack(head);
    // insertNodeAtIndex(7,head, 10);
    printList(head);
    // printf("List length = %d \n\n", getSize(head));
    // printf("Index of 2 is = %d", value_at(2,head)->data);
    return 0;
}
