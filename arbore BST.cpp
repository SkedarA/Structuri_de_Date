#include <stdio.h>
#include <iostream>

using namespace std;
 
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
 
struct node* createNode( int value){
    struct node* newNode;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
 
    return newNode;
}
 
 
struct node* insert(struct node* root, int data)
{
    if (root == NULL) return createNode(data);
 
    if (data < root->data)
        root->left  = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);   
 
    return root;
}
 
void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<(root->data);
    inorder(root->right);
}
 
 
int main(){
    struct node *root = NULL;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);
 
    inorder(root);
}