#include<iostream>
using namespace std;

int main()
{
    int n = 12;
    int i = 2;

    int mask = 1 << i;
    if(n & mask) {
        cout << "1";
    }
    else {
        cout << "0";
    }
    
    return 0;
}
