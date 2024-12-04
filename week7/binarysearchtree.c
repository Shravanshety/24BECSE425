#include <stdlib.h> 
#include <stdio.h> 

struct node{
    int data;
    struct node *left, *right;
};

struct node *create(int data){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

struct node *insert(struct node *root, int val){
    if (root == NULL){
        return create(val);
    }
    if (root->data == val){
        return root;
    }
    if (root->data > val){
        root->left = insert(root->left, val); 
    }
    else {
        root->right = insert(root->right, val);  
    }
    return root;
}

void inorder(struct node *root){
    if (root != NULL){
        inorder(root->left);
        printf("%d ", root->data); 
        inorder(root->right); 
    }
}
void preorder(struct node *root){
    if (root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right); 
    }
}
void postorder(struct node *root){
    if (root != NULL){
        
        postorder(root->left);
        postorder(root->right); 
        printf("%d ", root->data);
    }
}


void main(){
    struct node *root = NULL;
    
  
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    
    printf("Traversing elemnts in INORDER:\n");
    inorder(root);  
    printf("\n");
    printf("Traversing elemnts in PREORDER:\n");
    preorder(root);  
    printf("\n");
    printf("Traversing elemnts in POSTORDER:\n");
    postorder(root);  
    printf("\n");

}
