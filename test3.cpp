#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    // srand(time(NULL));
    srand(time(NULL));
    for(int i=0;i<5;i++)
    cout << rand()%10 << " ";
    return 0;
}