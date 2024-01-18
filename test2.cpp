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
void sort(long a[],long n){
	int temp;
	for (int i =0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<a[j]){
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

int main()
{
	long a[10], n;
	cin >> n;
	input(a,n);
	output(a,n);
	cout << endl;
	sort(a,n);
	output(a,n);
	system("pause");
	return 0;
}
