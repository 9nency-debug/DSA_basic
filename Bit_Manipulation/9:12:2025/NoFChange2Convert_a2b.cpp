#include<iostream>
using namespace std;

int main() {

    int n = 12;
    int a = 3;
    int count = 0;
    
    while(a != 0) {
        if(a&1) {
        count++;
        }
    }
    cout<< count <<" ";
    return 0;
}