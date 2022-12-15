#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "geeksforgeeks";
    cout<<str.length()<<endl;
    cout<<str + "xyz"<<endl;
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<str.find("for")<<endl;
}
