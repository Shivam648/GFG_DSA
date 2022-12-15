#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev = NULL;
        next = NULL;
    }
};


// Node *insertBegin(Node *head, int x){
//     Node *temp = new Node(x);
//     temp->next = head;
//     if(head!=NULL){
//         head->prev=temp;
//     }
//     return temp;

// // }

// Node *reverseDll(Node *head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node *prev = NULL; 
//     Node *curr = head;
//     while(curr!=NULL){
//         prev = curr->prev;
//         curr->prev = curr->next;
//         curr->next = prev;
//         curr = curr->prev;
//     }
//     return prev->prev;
// }

Node *deleteStart(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
        return head;
    }
}

void print(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    // head = insertBegin(head,50);
    // reverseDll(head);
    deleteStart(head);
    print(head);

return 0;
}