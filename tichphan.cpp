#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a,b;
    do{
        cout  << "nhap a va b: ";
        cin >> a >> b;
        if(b<a || b<0){
            cout << "nhap lai!" << endl;
        }
    } while (b<a || b<0);
    double n;
    cout << "nhap so phan muon chia de tinh: ";
    cin >> n;
    double khoangcach  =(b-a)/n;
    double tichphan=0;
    for (int i=0;i<n;i++){
        tichphan +=khoangcach*(2*pow((a+i*khoangcach),2)+1);
    }
    cout << tichphan;
} 