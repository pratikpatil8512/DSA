/*You are given an integer array nums.

Return true if the frequency of any element of the array is prime, otherwise, return false.

The frequency of an element x is the number of times it occurs in the array.

A prime number is a natural number greater than 1 with only two factors, 1 and itself.*/

#include<bits/stdc++.h>
using namespace std;
    
    bool checkPrime(int num){
        if(num == 1) return false;
        if(num == 2) return true;
        for(int i = 2; i<=num/2; i++){
            if(num % i == 0){return false;}
        }
        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> mp;

        for(auto i : nums){
            ++mp[i];
        }

        for(auto it = mp.begin(); it!=mp.end(); it++){
            cout<<it->first<<"=>"<<it->second<<"=>"<<checkPrime(it->second)<<endl;
        }

        for(auto it = mp.begin(); it!=mp.end(); it++){
            if(checkPrime(it->second))return true;
        }
        return false;

    }
int main(){
    vector <int> ve  = {3,0,3,6,3,3};
    cout<<checkPrimeFrequency(ve);

    return 0;
}