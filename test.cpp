#include <iostream>
using namespace std;

long giaithua(long n){
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

bool snt(int n){
    if(n<2){
        return false;
    } else{
        
        for(int i=2;i<=n/2;i++){
            if(n%2==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    long n =5;
    int n1=n;
    for (int i=0;i<n;i++){
        for(int j=0;j<n1;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << tohop(i,j)<< " ";
        }
        cout << endl;
        n1--;
    }
    return 0;
}
