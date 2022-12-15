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

void removeDup(Node *head){
    Node *curr = head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete(temp);
        }
        else{
            curr = curr->next;
        }
    }
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
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(40);
    head->next->next->next->next->next = new Node(50);
    head->next->next->next->next->next->next = new Node(50);

    removeDup(head);
    print(head);

return 0;
}