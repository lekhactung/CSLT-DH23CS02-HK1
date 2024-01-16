#include <iostream>
#include <string>
using namespace std;


float ucln(int a, int b){
  int m;
    if( b ==0 ){
      cout << "ucln = " << a;
      return a;
    } else {
      m=a%b;
      return ucln(b,m);
    }
}

int main(){
  ucln(125,0);

  return 0;
}