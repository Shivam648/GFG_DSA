#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n){
    int res = 0, largest = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res=i;
            }
        }
    }
    return res;
}
int main(){
    int arr[] = { 3,5,8,23,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "The index of the second largest element of the array is:: "<< secondlargest(arr,n);
}