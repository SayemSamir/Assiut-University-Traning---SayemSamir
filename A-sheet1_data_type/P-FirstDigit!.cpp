#include<iostream>
using namespace std;
int main(){
  int X;
  cin>>X;
  int Firstdigit=X/1000;
  if(Firstdigit%2==0){
    cout<<"EVEN"<<endl;
  }
  else {
    cout<<"ODD"<<endl;
  }

}
