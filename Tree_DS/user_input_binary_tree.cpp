//create and display inorder 


#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
};

node *create()
{
    node *newnode=(node*)malloc(sizeof(node));
    cout<<"Enter data(-1 for no node)"<<endl;
    int x;
    cin>>x;
    if(x==-1)return 0;
    newnode->data=x;
    cout<< "Enter for left node : "<<x<<endl;
    newnode->left=create();
    cout<< "Enter fo right node : "<<x<<endl;
    newnode->right=create();
    return newnode;

}
void inorder(node *root)
{
    if(!root)return;

    inorder(root->left);
    cout<<root->data<< " ";
    inorder(root->right);
}

int main()
{
    node *root=(node*)malloc(sizeof(node));
    root=create();
    cout<< "****************Display*************"<<endl;
    inorder(root);

}
