#include <iostream>
#include <cmath>
using namespace std;

void soLuongUocSo(long n)
{
    for (int i=1;i<=n;i++)
    {
        cout << i << " ";
    }
}

bool SNT (long n)
{
    if (n < 2) 
	{
		return false;
	}
	else if (n>2)
	{
		if (n % 2 == 0)  
		{
			return false;
		}
		for (int i = 2; i <= n/2; i++)  
		{
			if (n%i == 0)  
			{
				return false;
			}
		}
	}
	return true;
}

long soDaoNguoc ( long n)
{
    long sodao=0;
    while (n!=0){
        long tmp = n % 10;
        sodao = sodao*10+tmp;
        n/=10;
    }
    return sodao;
          
}

int main(){
        int choice;
    do{
        system("cls");
        cout << " == MENU == \n"
            << "1- Kiem tra so doi xung \n"
            << "2- In ra so nguyen trong pham vi A->B \n"
            << "3- So doi xung <= N \n";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
        {
            cout << "nhap so nguyen can kiem tra: ";
            int n; cin >> n;
            if ( n == soDaoNguoc(n)){
                cout << n << " la so doi xung" << endl;
            } else {
                cout << n <<" k la so doi xung" << endl;
            }
            break;
        }
        case 2:
        {
            int a,b;
            do{
            cout << "nhap pham vi a -> b (a<=b)";
            cin >> a >> b;
            } while (a>b);
            for(int i=a;i<=b;i++){
                cout << i << " ";
            }
            break;
        }
        case 3:
        {
            int n;
            do{
                cout << "nhap n ( n>0) : ";
                cin >> n;
            }while (n<0);
            for(int i=0;i<n;i++){
                if( i == soDaoNguoc(i)){
                    cout << i << " ";
                }
            }
            break;
        }
        default:
            break;
        }
        system("pause");
    }while ( choice !=0);
    return 0;
}
