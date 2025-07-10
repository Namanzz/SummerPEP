#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val){
            data=val;
            prev=NULL;
            next=NULL;
        }
};

void insertLast(Node *&head, int val){
    Node *node=new Node(val);
    if(head==nullptr){
        head=node;
        return;
    }
    Node *temp=head;
    while(temp->next != nullptr){
        temp=temp->next;
    }
    temp->next=node;
    node->prev=temp;
}

void printList(Node *&head){
    Node *temp=head;
    cout<<"nullptr <- ";
    while(temp->next!=nullptr){
        cout << temp->data <<" <-> ";
        temp=temp->next;
    }
    cout<< temp->data << " -> nullptr" << endl;
}

void deleteLast(Node *&head){
    if(head==NULL) return;
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->prev->next=nullptr;
    delete temp;
}

int main()
{
    Node *head=new Node(10);
    insertLast(head, 20);
    insertLast(head, 30);
    insertLast(head, 40);

    deleteLast(head);

    printList(head);
}