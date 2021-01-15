#include<iostream>
using namespace std;

int cheetah(int money){
  int Totalbottle;
  Totalbottle = money/10;
  int ticket;
  ticket = Totalbottle;
  int bottle = 0;
  while(ticket>= 3){
    bottle++;
    ticket -=2;
  }
  return Totalbottle + bottle;
}

int main(){
    cout<<cheetah(20)<<"\n";
    cout<<cheetah(35)<<"\n";
    cout<<cheetah(101)<<"\n";
    cout<<cheetah(150)<<"\n";
    cout<<cheetah(204)<<"\n";
}