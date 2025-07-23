//find the prime numbers in given range
#include<iostream>
using namespace std;

bool checkPrime(int num){
        if(num == 1) return false;
        if(num == 2) return true;
        for(int i = 2; i<=num/2; i++){
            if(num % i == 0){return false;}
        }
        return true;
    }

int main(){
    int start = 1, end = 100;
    for(int i = start; i<=end; i++){
        if(checkPrime(i))
        cout<<i<<endl;
    }
    return 0;
}