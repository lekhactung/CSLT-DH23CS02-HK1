#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return 1.0/x;
}
double tichphan(double a,double b,double soDoan){
    double doan = (b-a)/soDoan;
    double kq =0.0;

    for(int i=0;i<soDoan;i++){
        double x1 = a + i * doan;
        double x2 = x1 + doan;
        double giaTriX1 = f(x1);
        double giaTriX2 = f(x2);
        kq += (giaTriX1+giaTriX2)*doan/2.0;
    }
    return kq;
}

int main(){
    int a,b;
    long soDoan=1000;
    cout << tichphan(1,2,soDoan);
    return 0;
} 