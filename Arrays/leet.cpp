#include<bits/stdc++.h>
using namespace std;

    string leet(string s, vector<int>& indices) {
        string str=s;
        for(int i=0;i<indices.size();i++)
        {
            str[indices[i]]=s[i];
        }
        return str;
    }

int main(){
    string s = "codeleet";
    vector<int> arr = {4,5,6,7,0,2,1,3};
    cout<<leet(s,arr)<<endl;
}