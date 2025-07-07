#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

void insertAtEnd(Node *&head, int val){
    Node *node=new Node(val);
    if(head == nullptr){
        head=node;
        return;
    }
    Node *temp=head;
    while(temp->next != nullptr){
        temp=temp->next;
    }
    temp->next=node;
}

void insertAtBeginning(Node *&head, int val){
    Node *node=new Node(val);
    node->next=head;
    head=node;
}

void insert(Node *&head,int pos, int val){\
    if(pos==0){
        insertAtBeginning(head, val);
    }
    Node *node=new Node(val);
    Node *temp=head;
    int i=0;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    node->next=temp->next;
    temp->next=node;
}

void deleteHead(Node *&head){
    if(head==nullptr){
        return;
    }
    Node *temp=head;
    head=head->next;
    delete temp;
}

void printList(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout << temp->data <<" -> ";
        temp=temp->next;
    }
    cout << "nullptr" << endl;
}

bool search(Node *&head, int key){
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==key) return true;
        temp=temp->next;
    }
    return false;
}

int main()
{
    // Node* head = NULL;

    Node *head=new Node(10);
    // insertAtEnd(head, 20);
    // insertAtEnd(head, 30);
    // insertAtEnd(head, 40);
    // insertAtBeginning(head, 5);
    // insert(head, 2, 15);
    deleteHead(head);

    printList(head);
}