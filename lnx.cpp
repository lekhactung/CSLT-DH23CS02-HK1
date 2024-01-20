#include <iostream>
using namespace std;


int main(){
    double a,b,n,h;
    do{
        cout << "nhap: ";
        cin >> a >> b >> n;
        if(b<a || b<0){
            cout << "nhap lai!" << endl;
        }
    }while(b<a || b<0);
    h=(b-a)/n;
    double s=0;
    for(int i=1;i<=n;i++){
        double dt=h*(1/(a+(i-1)*h));
        s+=dt;
    }
    cout << s;


}