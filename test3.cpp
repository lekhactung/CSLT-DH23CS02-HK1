#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    // srand(time(NULL));
    srand(time(NULL));
    for(int i=0;i<5;i++)
    cout << rand()%100 << " ";
    return 0;
}