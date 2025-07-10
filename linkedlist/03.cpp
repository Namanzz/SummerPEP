#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data=val;
            next=nullptr;
        }
};

void insertLast(Node *&head, int val){
    Node *node=new Node(val);
    if(head==nullptr){
        head=node;
        head->next=node;
        return;
    }
    Node *temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}

void insertBeginning(Node *&head, int val){
    Node *node=new Node(val);
    if(head==nullptr){
        node->next=node;
        head=node;
        return;
    }
    Node *temp=head;
    while(temp->next != head){
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
    head=node;
}

void insert(Node *&head, int pos, int val){
    Node *node=new Node(val);
    Node *temp=head;

    for(int i=0;i<pos-1;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;
}

void display(Node *&head){
    Node* temp=head;
    if(head==nullptr) return;
    while(temp!=head){
        cout<<temp->data<<" -> ";
    }
    cout<<head->data<<"(Head Node)"<<endl;
}

int main()
{
    Node *head=new Node(10);

    insertLast(head, 20);
    insertLast(head, 30);
    insertLast(head, 40);
    insertLast(head, 50);
}