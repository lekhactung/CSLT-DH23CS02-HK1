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
        for (int z=0;z<=n2;z++){
            cout << "* ";
        }
        cout << endl;
        n2--;
    }
}
void tamgiac2(int n){
    int n2 =n;
    for (int i =0;i<n;i++){
        for (int z=0;z<=n2;z++){
            cout << "";
        }
        cout << endl;
        n2--;
    }
}
int main(){
    int n =5;
    
    tamgiac(n);
    cout << endl;
    tamgiacnguoc(n);
    
    return 0 ;
}