#include<bits/stdc++.h>
using namespace std;

struct myStack{
    int *arr, cap, top;
    myStack(int c){
        cap=c;
        top=-1;
        arr=new int [cap];
    }

    void push(int x){
        if(top==cap-1){
            cout<<"Full Stack"<<endl;
        }
        top++;
        arr[top]=x;
    }

    int pop(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
        }
        int res=arr[top];
        top--;
        return res;
    }

    int peek(){
        if(top==-1){
            cout<<"Empty Stack"<<endl;
        }
        return arr[top];
    }

    int size(){
        return (top+1);
    }

    bool isEmpty(){
        return top==-1;
    }
};

int main(){
    myStack s(5);
    s.push(5);
    s.push(10);
    s.push(20);
    s.push(40);
    s.push(203);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
return 0;
}