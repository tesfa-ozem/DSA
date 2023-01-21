#include<stdio.h>  
#include<stdlib.h>  

struct person
{
    /* data */
    char firstName[10];
    int age;

};

typedef struct person Person ;



void update_person(struct person *p, int age){
    p->age = 5;


}
struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

struct Node* new_node(int value) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void preorder_traversal(struct Node* root) {
    if (root) {
        printf("%d \n", root->value);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
    printf("\n");
}
void inorder_traversal(struct Node* root) {
    if (root) {
        inorder_traversal(root->left);
        printf("%d \n", root->value);
        inorder_traversal(root->right);
    }
      printf("\n");
}
void postorder_traversal(struct Node* root) {
    if (root) {
        postorder_traversal((*root).left);
        postorder_traversal((*root).right);
        printf("%d \n\n", (*root).value);
    }
    // printf("\n");
}

void recursion(int n){
    printf("%d \n",n);
    if(n>0){
        recursion(n-1);
    }
    
}




int main(){
    struct Node* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    // preorder_traversal(root);
    // inorder_traversal(root);
    postorder_traversal(root);
    return 1;
}