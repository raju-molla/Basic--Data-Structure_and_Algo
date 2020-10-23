#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node *prev;
};

node *head=NULL, *tail=NULL, *newnode;

void display()
{
    node *temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<< " ";
        temp=temp->next;
    }
    cout<<endl;

}

void createnode(){
    int choice=1;
    while(choice==1){
        newnode=(node*)malloc(sizeof(node));
        cout<<"Enter a data:"<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL){
            head=tail=newnode;
        }
        else {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        cout<< "Enter 1 for continue and 0 for stop!@#"<<endl;
        cin>>choice;
    }
}

void reversenode()
{


     if(head==NULL){
        cout<< "Here have no element!!!"<<endl;
    }
    else{
        node *current=head;
        node *nextnode;
        while(current!=NULL){
            nextnode=current->next;
            current->next=current->prev;
            current->prev=nextnode;
            current=nextnode;
        }
        current=head;
        head=tail;
        tail=current;

    }

}

int main()
{
    createnode();
    display();
    reversenode();
    cout<< "After reversing node"<<endl;
    display();
}



















