#include<iostream>
using namespace std;

int main() {

    int num;
    cin>>num;

    if(num&1 != 0) 
        cout << "Odd";

    else 
        cout << "Even";
    

    return 0;
}