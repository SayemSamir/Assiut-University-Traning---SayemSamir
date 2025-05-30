#include<iostream>
using namespace std;
int main(){
  int A,B;
  char s;
  cin>>A
  >>s>>B;
  if(s=='+'){
    cout<<A+B<<endl;
  }
  else if(s=='-'){
    cout<<A-B<<endl;
  }
  else if(s=='*'){
    cout<<A*B<<endl;
  }
  else if(s=='/'){
    cout<<A/B<<endl;
  }


}
