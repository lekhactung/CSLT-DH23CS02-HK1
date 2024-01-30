#include <iostream>
using namespace std;
void input(long a[],long n){
    for(int i=0;i<n;i++){
        cout << "So cho ngoi cua phong " << i+1 << ": ";
        cin >> a[i];
       }
    }
void output(long a[],long n){
    for(int i=0;i<n;i++){
        cout << "Phong hoc thu " << i+1 << ": ";
        cout << a[i] << " ";
        cout << "cho!" << endl;
    }
}
long phamvi(const long a[],long n,long min,long max){
    for(int i=0;i<=n;i++){
        if(a[i]>=min && a[i]<=max){
            cout << "Phong hoc thu " << i+1 << ": ";
            cout << a[i] << " ";
            cout << "cho!" << endl;      
            }
    }
    return 0;
}
long min_value(const long a[],long n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            min=a[i];
        }
    }
    return min;
}
const long n = 4;
int main(){
    long a[n],min,max;
    input(a,n);
    //MENU
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
            cout << "phong co so cho it nhat la: " << min_value(a,n) << endl;
            break;
        case 2:
            output(a,n);
            break;
        case 3:
            cout << "Nhap pham vi can tim: " << endl;
            do{
            cin >> min >> max;
                if(min >=max){
                    cout << "Nhap lai!";
                }
            }while(min >= max);
            phamvi(a,n,min,max);
            break;
        case 4: 
                int first;
            do{ 
                cout << "So phong can in: ";
                cin >> first;
                if(first<=0){
                    cout << "Nhap lai!";
                }
            }while (n<=0);
            output(a,first);
        break;
        default:
            cout << "Nhap lai!" <<endl;
            break;
        }

    system ("pause");
    }while(choice !=5);


    return 0;
}