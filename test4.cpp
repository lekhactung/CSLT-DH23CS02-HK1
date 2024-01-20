#include <iostream>
using namespace std;
double f(double x) {
    return 1.0 / x;
}

double tichPhanHinhThang(double a, double b, int soDoan) {
    double doan = (b - a) / soDoan;
    double ketQua = 0.0;

    for (int i = 0; i < soDoan; i++) {
        double x1 = a + i * doan;
        double x2 = x1 + doan;
        double giaTriX1 = f(x1);
        double giaTriX2 = f(x2);
        ketQua += (giaTriX1 + giaTriX2) * doan / 2.0;
    }

    return ketQua;
}
long giaithua(int n){
    int gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
long tohop(long n,long k){
    int c = giaithua(n)/giaithua(k)/giaithua(n-k);
    return c;
}
int main() {
    // double a = 1.0;  
    // double b = 2.0;  
    // int soDoan = 1000;
    // double ketQua = tichPhanHinhThang(a, b, soDoan);

    // std::cout << "Tich phan hinh thang cua 1/x tren khoang tu " << a << " den " << b << " la: " << ketQua << std::endl;
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << tohop(i,j)<<" ";
        }
        cout << endl;
    }
    return 0;
}
