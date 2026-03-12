//Program to perform creation of new node, inserting in binary tree and preorder traversal

#include <stdio.h>
#include <stdlib.h>

struct Treenode
{
    int data;
    struct Treenode*left;
    struct Treenode*right;
};
//Creating a new node
struct Treenode* createNode(int data)
{
  struct Treenode* newNode=(struct Treenode*)malloc(sizeof(struct Treenode));
  newNode->data=data;
  newNode->left=NULL;
  newNode->right=NULL;
  return newNode;
}

//Simple insertion in binary tree
struct Treenode* insert(struct Treenode*root, int data)
{
    if(root==NULL)
    {
        return createNode(data);
    }
    if(root->left==NULL)
    {
        root->left=createNode(data);
    }
    else if(root->right==NULL)
    {
        root->right= createNode(data);
    }
    else
    {
        insert(root->left,data);
    }
    return root;
}

//Preorder traversal
void pre_order_trave(struct Treenode* root)
{
    if(root!=NULL){
        printf("%d ",root->data);
        pre_order_trave(root->left);
        pre_order_trave(root->right);
    }
}

int main()
{
    struct Treenode*root=NULL;
    
    root=insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
    
    printf("Preorder Traversal:");
    pre_order_trave(root);
    return 0;
}
