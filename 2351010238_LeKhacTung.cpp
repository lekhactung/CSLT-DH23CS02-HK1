#include <iostream>
using namespace std;
const int maxSize = 25;
void nhap(int arr[], int arrSize);
void xuat(const int arr[], int arrSize);void xoa(int arr[], int& arrSize, int p);
int main() {
	int arrSize,arr[maxSize],vt;
	do {
		cout << "nhap so luong phan tu: " <<endl; 
		cin >> arrSize;
		if (arrSize <= 0 || arrSize > maxSize) 
		{
			cout << " nhap lai! \n ";
		}
	} while (arrSize <= 0 || arrSize > maxSize);
	// nhap
	cout << "nhap cac phan tu: ";
	nhap(arr, arrSize);
	// xuat
	cout << "cac phan tu da nhap la: ";
	xuat(arr, arrSize);
	//xoa
	cout << "nhap vi tri can xoa: ";
	cin >> vt;
	xoa(arr, arrSize, vt); 
	cout << "cac gia tri con lai sau khi da xoa la: ";
	xuat(arr, arrSize);
	system("pause");
	return 0;
}

void nhap(int arr[], int arrSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		cin >> arr[i];
	}
}
void xuat(const int arr[], int arrSize) {	for (int i = 0; i < arrSize; i++) 	{		cout << arr[i];		if (i != arrSize-1) cout << ",";	}	cout << endl;}void xoa(int arr[], int& arrSize, int p){	for (int i = p - 1; i < arrSize; i++)	{		arr[i] = arr[i + 1];	}	arrSize--;}