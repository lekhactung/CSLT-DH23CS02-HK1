#include <iostream>
using namespace std;

long giaithua(int n)
{
    int gt =1;
    for (int i=1;i<=n;i++){
        gt*=i;
    }   
    return gt;
}
long tohop(long n,long k)
{
    int c = giaithua(n) / giaithua(k) /giaithua(n-k);
    return c;
}
double f(long x){
    return 1.0/x;
}
double tichphan(long a,long b,long soDoan){
    double kq = 0; 
    double doan = (b-a)/soDoan;

    for(int i=0;i<soDoan;i++){
        double x1 = a+i*doan;
        double x2 = x1 * doan;
        double giaTriX1 = f(x1);
        double giaTriX2 = f(x2);
        kq += (giaTriX1+giaTriX2)*doan/2.0;
    }
    return kq;
}

int main(){
    int n;
    cin >> n;
    int n1 = n;
    for(int i =0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout << " ";
        }
        for (int j=0;j<=i;j++){
            cout << tohop(i,j) << " ";
        }
        cout << endl;
        n1--;
    }
    return 0;
}
