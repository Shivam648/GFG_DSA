#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum=1;
    cout<<"Enter the number::";
    cin>>n;
    for(int i=1;i<=n;i++){
        // sum+=(2*i-1);
        // cout<<sum<<" ";

        cout<<(i*i)+1<<" ";
    }
    
    return 0;
}