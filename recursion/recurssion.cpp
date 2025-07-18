#include<iostream>
using namespace std;
int count = 0;

void incre(){
    if(count==3)return;
    count++;
    cout<<"function is called..."<<endl;
    incre();
}

int main(){
    incre();
    cout<<count;
    return 0;
}