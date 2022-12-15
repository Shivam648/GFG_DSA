#include<bits/stdc++.h>
using namespace std;

class student{
    string name;
    public:
    int a,b;

    student(){
        cout<<"Default constructor is called"<<endl;
        a=10; b=20;
    }

    // student(string str, int a, int g){
    //     cout<<"Parameterized constructor is called"<<endl;
    //     name=str; age=a; gender=g;
    // }
};

int main(){
    student s;
    cout<<"a: "<<s.a<<endl<<"b: "<<s.b;
return 0;
}