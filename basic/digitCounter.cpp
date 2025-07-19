#include<bits/stdc++.h>
using namespace std;

int digitCounter(int n){
    int sum = 0;
    while(n>0){
        sum += 1;
        n /= 10;
    }

    return sum;    
}

int main(){
    int a = digitCounter(512);
    cout<<a;

    return 0;
}