#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int value)
{
    Node *newnode=(Node *)malloc(sizeof(Node));
    if(newnode==NULL){
        cout<< "Error!"<<endl;
        exit(1);
    }
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void add_left(Node *node, Node *child){
    node->left=child;
}

void add_right(Node *node, Node *child)
{
    node->right=child;
}

Node *create_tree(){
    Node *two=create_node(2);
    Node *seven=create_node(7);
    Node *nine=create_node(9);
    add_left(two,seven);
    add_right(two,nine);

    Node *one=create_node(1);
    Node *six=create_node(6);
    add_left(seven,one);
    add_right(one,six);

    Node *five=create_node(5);
    Node *ten=create_node(10);
    add_left(six,five);
    add_right(six,ten);

    Node *eight=create_node(8);
    add_right(nine,eight);

    Node *three=create_node(3);
    Node *four=create_node(4);
    add_left(eight,three);
    add_right(eight,four);


    return two;


}



int main()
{
    Node *root=create_tree();
    cout<<root->data<<endl;
}
