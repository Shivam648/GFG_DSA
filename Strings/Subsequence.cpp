#include<bits/stdc++.h>
using namespace std;


// Iterative Approach

// bool isSubseq(string s1, string s2, int n, int m){
//     int j=0;
//     for(int i=0;i<n&&j<m;i++){
//         if(s1[i]==s2[j]){
//             j++;
//         }
//     }
//     return (j==m);
// }

// Recursive Approach

bool isSubseq(string s1, string s2, int n, int m){
    if(m==0) return true;
    if(n==0) return false;
    if(s1[n-1]==s2[m-1]){
        return isSubseq(s1,s2,n-1,m-1);
    }
    else{
        return isSubseq(s1,s2,n-1,m);
    }
}
int main(){
    string s1 = "abcd";
    string s2 = "ad";
    int n = s1.length();
    int m = s2.length();
    cout<< isSubseq(s1,s2,n,m);
}