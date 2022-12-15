#include<bits/stdc++.h>
using namespace std;

int max_odd_even(int arr[], int n){
    int res=0, curr = 1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2 !=0 && arr[i-1]%2==0)){
            curr++;
            res = max(res, curr);
        }
        else{
            curr = 1;
        }
    }
    return res;
}

int main() {	
      int arr[] = {5,10,20,6,3,8};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<< max_odd_even(arr, n);  
}