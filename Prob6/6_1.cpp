#include<iostream>
#include<string>
using namespace std;

int myFunc(string x){
    int countX=0,countY=0;
    int l1 = x.size();
    for(int i = 0;i<l1;i++){
        if(x[i]=='X'){
            countX++;
        }else if(x[i]=='Y'){
            countY++;
        }
    }
    if(countX>countY){
        return 1;
        }else if(countX<countY){
            return -1;
        }else{
            return 0;
        }

}

int main(){
    cout<<myFunc("XYXXYX")<<endl;
    cout<<myFunc("XXYY")<<endl;
    cout<<myFunc("XYYYYY")<<endl;
    cout<<myFunc("XYXY")<<endl;
    cout<<myFunc("XXXXXYYYY")<<endl;
    cout<<myFunc("Y")<<endl;

}