#include<bits/stdc++.h>
using namespace std;

int reverse(int arr[], int n){
    int low=0, high = n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] =temp;
        low++; high--;
    }
}


int main(){
    int arr[] = {3,4,5,6,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}