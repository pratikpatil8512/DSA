#include<iostream>
using namespace std;

void addition( int range, int num = 0, int sum = 0){
    if(num == range){
        sum += num;
        cout<<sum<<endl;
        return ;
    }
    addition( range, ++num, sum+num);
}

int addi( int target, int num = 0){
    if(num == target){
        return 0;
    }
    return num + addi(target, num=num+1);
}

int main(){
    // fun(10);
    cout<<"Addition of first 5 numbers: ";
    addition(5);
    int ans = addi(5);
    cout<<"Addition of first 5 numbers: "<<ans;
    return 0;
}