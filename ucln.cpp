#include <iostream>
#include <string>
using namespace std;

float ucln(int a,int b)
{
  int m;
  if(b==0){
    return a;
  } else {
    m=a%b;
    return ucln(b,m);
  }
}

float ucln2(int a,int b){
  while(b!=0){
    int r=a%b;
    a=b;
    b=r;
  }
  return a;
}

float bcnn(int a,int b){
  return a*b/ucln(a,b);
}

int main(){
  cout << ucln(0,20) << endl;
  cout << bcnn(20,28) << endl;
  cout << ucln2(0,20);
  return 0;
}