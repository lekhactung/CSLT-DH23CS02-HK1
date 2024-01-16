#include <iostream>
using namespace std;

void NhapMang(long a[],long n)
{
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
}

void XuatMang(const long a[], long n){
    for(int i=0;i<n;i++)
    {
        cout << i+1 << " : " << a[i] << " " << endl;
    }
}

long PhamVi(const long a[],long n, long min,long max)
{
    cin >> min >> max;
    for(int i=0;i<n;i++){
        if(a[i]<=max && a[i]>=min){
            cout  << i+1 << " : " << a[i] << " " << endl;
        }
    }
    return 0;
}

long GiaTriMin(const long a[],long n)
{
    int min=a[0];
    for(int i =0;i<n;i++){
        if(a[i]<=min){
            min =a[i];
        }
    }
    return min;
}

const long n=5;

int main(){
    long a[n],min,max;
    cout << "nhap so cho ngoi cua tung phong: ";
    NhapMang(a,n);
    int choice;
    do{
        system("cls");
        cout << "1- So cho hoc it nhat \n"
            << "2- In danh sach cac phong hoc va so cho \n"
            << "3- Phong hoc co so cho trong pham vi [x,y] \n"
            <<"4- In so cho cua n phong hoc dau tien \n"
            << "5- Ket thuc \n";
        cout << "chon chuong trinh : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "so cho hoc it nhat la: "  << GiaTriMin(a,n) << endl;
            break;
        }
        case 2: 
        {
            XuatMang(a,n);
            break;
        }
        case 3:
        {
            cout << "nhap pham vi cho ngoi can tim: ";
            PhamVi(a,n,min,max);
            break;
        }
        case 4:
        {
            int n;
            cout << "nhap n: ";
            cin >> n;
            XuatMang(a,n);
            break;
        }
        case 5:
        {
            cout << "ty \n ";
            break;
        }
        
        default:
            break;
        }
        system("pause");
    }while(choice !=5);

    return 0;
}
