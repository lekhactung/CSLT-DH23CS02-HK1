#include <iostream>
using namespace std;

int main(){
    double a,b,n,h;
    int x;
        do{
            do{
                do {
                    cin >> a >> b>> n;
                    // system("cls");
                    if(a<=0 || a >=b||n<=0){
                        cout << "nhap lai" << endl;
                        system("pause");
                    }
                }while (a<=0||a>=b||n<=0);
                h =(b-a)/n ;
                double s=0;
                    // for ( int i=1;i<=n;i++){
                    //     double dt=h*(1/(a+(i-1)*h));
                    //     s+=dt;
                    // }
                    int i=1;
                    do{
                        double dt=h*(1/(a+(i-1)*h));
                        s+=dt;
                        i++;
                    }while (i<=n);
                    cout << s;
                    cout << "tiep tuc (1) dung (0)";
                    cin >> x;
                }while (x==1);
                    if(x!=0||x==0){
                        break;
                     } 
            } while ( a >0 && b>a && n>0);
    return 0;
}