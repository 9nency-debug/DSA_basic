#include <iostream>
#include <queue>
using namespace std;
int main() {

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // Outputs 10
    cout << "Back: " << q.back() << endl;  // Outputs 30
    // cout << "Size: " << q.size() << endl;  // Outputs 3
    q.pop();
    


    return 0;
}