#include<bits/stdc++.h>
using namespace std;

int rmDuplicate(int arr[], int n){
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[res-1]!=arr[i]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}


int main(){
    int arr[] = {3,3,5,6,6,6,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    n = rmDuplicate(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}