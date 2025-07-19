//merge sort
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int temp[high+1];
    int i = low, j = mid+1, flag = low;
    while(i<=mid && j <= high){
        if(arr[i]<arr[j]){
            temp[flag] = arr[i];
            i++; flag++;
        }
        else{
            temp[flag] = arr[j];
            j++; flag++;
        }
    }
    while(i<=mid){
        temp[flag] = arr[i];
        i++; flag++;
    }
    while(j<=high){
        temp[flag] = arr[j];
        j++; flag++;
    }
    i = low;
    while(i<=high){
        arr[i] = temp[i];
        i++;
    }
}  

void divide(int arr[], int low, int high){
    if(low>=high) return;
    int mid = (low + high)/2;
    divide(arr, low, mid);
    divide(arr, mid+1, high);
    merge(arr, low, mid, high);
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
    divide(a, 0, 5);
    display(a, 5);


    return 0;
}
