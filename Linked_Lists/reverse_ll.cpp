#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next = NULL;
    }
};

// Node *revRec(Node *head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node *rest_head = revRec(head->next);
//     Node *rest_tail  = head->next;
//     rest_tail->next = head;
//     head->next = NULL;
//     return rest_head;
// }

Node *reviter(Node *head){
    Node *curr = head;
    Node *prev = NULL;
    while(curr!=NULL){
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    // head = revRec(head);
    head = reviter(head);
    print(head);
}