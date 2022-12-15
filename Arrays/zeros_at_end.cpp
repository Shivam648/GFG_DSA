#include<bits/stdc++.h>
using namespace std;

// Naive Approach

// void movetoEnd(int arr[], int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]!=0){
//                     swap(arr[i], arr[j]);
//                 }
//             }
//         }
//     }
// }

// Optimized code

void movetoEnd(int arr[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }
}

int main(){
    int arr[] ={10,8,0,0,12,0,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    movetoEnd(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}