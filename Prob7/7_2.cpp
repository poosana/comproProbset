#include<iostream>
#include<string>
using namespace std;

string pTu(int beauty,int habit){
    string status;
    cout<<"Rate her face out of 100: ";
    cin>>beauty;
    cout<<"How about her habit: ";
    cin>>habit;

    if(beauty<50){
        if(habit<50){
            status = "Unfriend";
        }else{
            status = "Friend";
        }
    }else if(beauty>50 && beauty <80){
        if(habit<50){
            status = "One-night-stand";
        }else{
            status = "Friend";
        }
    }else if(beauty>80){
        if(habit<50){
            status = "One-night-stand";
        }else{
            status = "Girlfriend";
        }
    }
    return status;
}

int main(){
    cout<<pTu(50,50);
    return 0;
}