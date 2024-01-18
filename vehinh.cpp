#include <iostream>
using namespace std;

void tamgiac(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void tamgiacnguoc(int n){
    int n2 =n;
    for (int i =0;i<n;i++){
        for (int z=1;z<=n2;z++){
            cout << "* ";
        }
        cout << endl;
        n2--;
    }
}
void tamgiacdeu(int n){
    for(int i=0;i<n;i++){
        for (int j=1;j<n-i;j++){
            cout << " ";
        }
        for (int j=0;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
  
int main(){
    int n =5;
    
    tamgiac(n);
    cout << endl;
    tamgiacnguoc(n);
    cout << endl;
    tamgiacdeu(n);
    cout << endl;
    
    return 0 ;
}