#include <iostream>
using namespace std;
long SoDaoNguoc(long n)
{
    long sodao =0;
    while ( n!=0 ){
        int tmp = n%10;
        sodao = sodao*10+tmp;
        n/=10;
    }
    return sodao;

}

void SensorNum(int arr[],long n)
{
    long a = SoDaoNguoc(n);
    long i=0,cnt =0;
    while(a>0){
        long tmp = a%10;
        arr[i]=tmp;
        i++;
        a/=10;
        cnt++;
    }
    for (int i=0;i<cnt;i++){
        cout << arr[i] << " ";
    }
}
int main(){

    long long n = 9876;
    int arr[100];
    SensorNum(arr,n);
}