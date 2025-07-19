//calculating LCM HCF
#include<iostream>
using namespace std;

int main(){
    int num1 = 12, num2 = 18;
    int hcf = 1;
    int min = (num1<num2)?num1:num2;
    
    for(int i = 2; i<min; i++){
        if(num1%i == 0 && num2 % i == 0){
            hcf = i;
        }
    }

    int lcm = (num1*num2)/hcf;

    cout<<"HCF of "<<num1<<" and "<<num2<<" = "<<hcf<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" = "<<lcm<<endl;


    return 0;
}