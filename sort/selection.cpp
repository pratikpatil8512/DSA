//implementing selection sort
#include<iostream>
using namespace std;

void selection(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n; j++){
            if(a[min]>a[j]){
                min = j;
            }
        }
        swap(a[min], a[i]); 
    }
}

void display(int a[], int n){
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
    selection(a, 5);
    display(a, 5);


    return 0;
}
