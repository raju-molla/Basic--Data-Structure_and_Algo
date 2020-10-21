#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

node *head=NULL,*temp,*newnode; ///head is point the first node;
                                ///temp pointer for taversing and
                                //newnode pointer works for create a space

///display funtion
void display(){
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
///create node
void insertNewnode()
{
    int choice=1;         /// 1 means continue taking node
    while(choice!=0){
        newnode=(node*)malloc(sizeof(node));
        cout<< "Enter a data:"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
        cout<< "Do you want to take another node: press 1 for yes and press 0 for no:"<<endl;
        cin>>choice;

    }
    temp=head;
    
}


int main()
{
    insertNewnode();
    cout<< "Display all node:"<<endl;
    display();
}
