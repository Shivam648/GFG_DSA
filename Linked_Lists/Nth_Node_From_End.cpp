#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d){
        data=d;
        next=NULL;
    }
};

void printNth(Node *head, int n){
    int len=0;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        len++;
    }
    if(len<n){
        return;
    }
    Node *curr = head;
    for(int i=1;i<len-n+1;i++){
        curr = curr->next;
    }
    cout<<curr->data<<" ";
}

void printnth(Node *head, int n){
    if(head==NULL) return;
    Node *first = head;
    for(int i=0;i<n;i++){
        if(first==NULL) return ;
        first = first->next;
    }
    Node *second = head;
    while(first!=NULL){
        second = second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    // printNth(head, 2);
    printnth(head,2);
    return 0;
}