#include<iostream>
using namespace std;

char myFunc(char x){
    if(x == 'A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        return 'y';
    }else{
        return 'n';
    }
}

int main(){
    cout<<myFunc('A')<<endl;
    cout<<myFunc('a')<<endl;
    cout<<myFunc('B')<<endl;
    cout<<myFunc('z')<<endl;
    cout<<myFunc('6')<<endl;
    cout<<myFunc('U')<<endl;
    cout<<myFunc('i')<<endl;
}