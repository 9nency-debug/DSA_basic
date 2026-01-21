#include<iostream>
using namespace std;

int main() {

    int n = 15;   
    int i = 3;    
    int value = 0; 

    int cleared = n & ~(1 << i);

    int ans = cleared | (value << i);

    cout << ans;

    return 0;
}
