#include<bits/stdc++.h>
using namespace std;

int moves(vector<int>& seats, vector<int>& students){
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    int count = 0;
    for(int i=0;i<students.size();i++){
        count = count+ abs(seats[i]-students[i]);
    }
    return count;
}

int main(){
    vector<int> seats = {4,1,5,9};
    vector<int> students = {1,3,2,6};

    cout<<moves(seats, students);
}