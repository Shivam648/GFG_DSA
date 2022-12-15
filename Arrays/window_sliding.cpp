#include<bits/stdc++.h>
using namespace std;

int window_slide(int arr[], int n, int k){
    int sum = 0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max_sum = sum;
    for(int i=k;i<n;i++){
        sum+= arr[i]-arr[i-k];
        max_sum = max(max_sum,sum);
    }
    return max_sum;
}

int main() {	
      int arr[] = {1,8,30,-5,20,7};
      int n = sizeof(arr)/sizeof(arr[0]);
      cout<< window_slide(arr, n, 3);  
}