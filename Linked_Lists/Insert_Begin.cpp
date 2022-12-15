#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *beginInsrt(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = NULL;
    head = beginInsrt(head,30);
    head = beginInsrt(head,20);
    head = beginInsrt(head,10);
    printList(head);
}