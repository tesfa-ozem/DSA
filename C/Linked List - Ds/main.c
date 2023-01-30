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
void insertNodeAtIndex(int data, Node *n, int index)
{
    int count = 1;
    Node *prev = NULL;
    Node *temp = n;
    while (temp != NULL)
    {
        if (count == index)
        {
            Node *newNode = (Node *)malloc(sizeof(Node));
            newNode->data = data;
            newNode->next = temp;
            if (prev == NULL)
            {
                head = newNode;
            }
            else
            {
                prev->next = newNode;
            }
            break;
        }
        prev = temp;
        temp = temp->next;
        count++;
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
    Node *temp = h;
    Node *prev = NULL;
    int value;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            if (prev == NULL)
            {
                head = NULL;
            }
            else
            {
                prev->next = NULL;
            }
            value = temp->data;
            free(temp);
            return value;
        }
        prev = temp;
        temp = temp->next;
    }
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

// Return the value at nth index
Node *value_at(int index, Node *h)
{
    int position = 0;
    Node *temp = h;
    while (temp != NULL)
    {
        if (position == index)
        {
            return temp;
        }
        position++;
    }
    
}

// Get value at nth index
Node* back(Node *h)
{
    Node *temp = h;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("%d \n",temp->data);
    return temp;
}

// erase(index) - removes node at given index

void erase(int index, Node *h)
{
    int count = 1;
    Node* temp = h->next;
    Node* previous = h;
    
    while (temp->next!= NULL)
    {
        if(count==index)
        {
            
            previous->next = temp->next;
            free(temp);
        }else
        {
            
            temp = temp->next;
            previous = previous->next;
            
        }
        count++;
    }
    
}

// value_n_from_end(n) - returns the value of the node at nth position from the end of the list

Node* value_n_from_end(int N, Node *h){
    int len = 0, i;
    Node* temp = h;
  
    // Count the number of nodes in Linked List
    while (temp != NULL) {
        temp = temp->next;
        len++;
    }
  
    // Check if value of N is not
    // more than length of the linked list
    if (len < N)
        return NULL;
    temp = h;
  
    // Get the (len-N+1)th node from the beginning
    for (i = 1; i < len - N + 1; i++)
        temp = temp->next;
    printf("%d \n\n", temp->data);
    return temp;
    

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
    // popBack(head);
    // erase(3,head);
    // back(head);
    // insertNodeAtIndex(7,head, 10);
    printList(head);
    printf("List length = %d \n\n", getSize(head));
    printf("Index of 1 is = %d", value_n_from_end(1,head)->data);
    return 0;
}
