#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    long long int sum = 0;
    int i = 3;
    while(i<=333){  
        sum += i*i;  
        i+=3;
        sum += i*i*i;
        i+=3;
    }
    cout<<setprecision(9)<<sum;
    return 0;
}   