#include<bits/stdc++.h>
using namespace std;

// Naive Approach

// bool sorted(int arr[], int n){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[i]){
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// Efficient Method
bool sorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[] = {3,4,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< sorted(arr,n);
}