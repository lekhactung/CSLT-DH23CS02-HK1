#include <iostream>
using namespace std;
int main (){
    long n,s=0;
    cin >> n;
    for (int i=1;i<n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    system("cls");
    if ( s == n){
        cout << n << " la so hoan hao";
    } else {
        cout << n << " khong la so hoan hao";
    }
}