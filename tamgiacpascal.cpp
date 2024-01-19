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
int main(){
    int n;
    cin >> n;
    int n1 = n;
    for(int i =0;i<n;i++){
        for (int j=0;j<n1;j++){
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
