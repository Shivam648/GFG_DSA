#include<bits/stdc++.h>
using namespace std;

// Naive Approach

// int maxSubarray(int arr[], int n){
//     int res = arr[0];
//     for(int i=0;i<n;i++){
//         int sum = 0;
//         for(int j=i;j<n;j++){
//             sum = sum+arr[j];
//             res = max(res, sum);
//         }
//     }
//     return res;
// }

//Efficient Approach

int maxSubarray(int arr[], int n){
    int res = arr[0];
    int maxEnd = arr[0];
    for(int i=1; i<n;i++){
        maxEnd = max(maxEnd+arr[i], arr[i]);
        res = max(res, maxEnd);
    }
    return res;
}

int main() {	
      int arr[] = {-3,8,-2,4,-5,6};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<< maxSubarray(arr, n);  
}