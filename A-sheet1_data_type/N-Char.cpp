#include<iostream>
using namespace std;

int main(){
 char ch;
 cin>>ch;
 if(ch>=97 && ch<=122){
    ch-=32;
 }else{
    ch+=32;
 }
 cout<<ch<<endl;

}
