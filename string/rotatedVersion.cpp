//two strings of equal length, check if one string is rotated version of another

#include<bits/stdc++.h>
using namespace std;

string check(string a, string b){
    b = b+b;
    int j = 0, flag =0, i = 0;
    while(i<b.length()){
        if(a[j] == b[i]){
            i++; j++;
        }
        else{
            j = 0; i++;
        }
        if(j == a.length()){    //check if all character matches
            flag = 1; break;
        }
    }
    if(flag) return "yes";
    else return "no";

}

int main(){
    string a = "pratik", b = "atikpr";
    string c = check(a, b);
    cout<<c;
    return 0;
}