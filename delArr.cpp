#include <iostream>
using namespace std;

long input (long a[],long n){
    for (int i =0;i<n;i++){
        cin >> a[i];
    }
    return 0;
}
long delArr (long a[],int n){
    int vt;
    do{
        cout << "nhap vt tri can xoa : 1 -> " << n << " : ";
        cin >> vt;
        if(vt <1 || vt>n){
            cout << "nhap lai!";
        }
    } while (vt<1 || vt>n);
    for (int i=vt-1;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    return 0;
}
void output (long a[],long n){
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
}
const long max =10;
int main(){
    long  n;
    cin >> n;
    long a[n];
    input(a,n);
    output(a,n);
    cout << endl;
    delArr(a,n);
    int n2=n-1;
    output(a,n2);
    
}