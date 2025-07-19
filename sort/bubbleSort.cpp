//I am goining to implement both rgular bubble sort and optimized bubble sort

#include<bits/stdc++.h>
using namespace std;

void regularBubbleSort(int a[], int n){     //regular bubble sort
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

void optimisedBUbbleSort(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int flag = 0;
        for(int j = 0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                flag = 1;
            }
        }
        if(!flag) break;
    }
}

void display(int a[], int n){       //only for display purpose
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int a[] = {5, 4, 2, 3, 1};
    cout<<"Before sorting"<<endl;
    display(a, 5);
    cout<<"After sorting"<<endl;
    optimisedBUbbleSort(a, 5);
    display(a, 5);


    return 0;
}
