#include <iostream>
using namespace std;
bool snt(long n){
    if(n<2){
        return false;
    } else {
        for (int i=2;i<n;i++){
            if(n%i==0){
                return false;
            } 
        }
    }
    return true;
}
long sodaonguoc(long n){
    long sodao=0;
    while(n!=0){
        int m = n%10;
        sodao=sodao*10+m;
        n/=10;
    }
    return sodao;
}
void uocso(long n){
    int i=0;
    int arr[10];
    if(n>1){
        for (int i=0;i<n;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<n;i++){
            cout<< arr[i] << " ";
        }
    }
}
long tongphantu(long n){
    int s=0;
    while(n!=0){
        int m=n%10;
        s+=m;
        n/=10;
    }
    return s;
}
long ucln(long n,long m){
    while(m!=0){
        int r=n%m;
        n=m;
        m=r;
    }
    return n;
}
long bcnn(long n,long m){
    return n*m/ucln(n,m);
}
void thuannghich(int a,long b){
    for (int i=a;i<=b;i++){
        if(i%sodaonguoc(i)==0){
            cout << i << " ";
        }
    }
}
int main(){

    thuannghich(10,1000);
    return 0;
}