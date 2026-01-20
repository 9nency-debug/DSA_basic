#include<iostream>
using namespace std;

int main() {

    int n = 15;
    int i = 3;

    int mask = 1 << i;
    int ans = n | mask;

    cout << ans;

    return 0;
}