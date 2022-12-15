#include<bits/stdc++.h>
using namespace std;

void pelindrome(string s){
    int n =s.length();
    for(int i=0;i<n;i++){
        if(s[i]==s[n-i-1]){
            cout<<"Pelindrome"<<endl;
            break;
        }
        else{
            cout<<"Not Pelindrome";
            break;
        }
    }
}
int main(){
    string str = "abccba";
    pelindrome(str);
}