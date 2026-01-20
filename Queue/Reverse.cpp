#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // queue<int> reverseQueue;
    // while (!q.empty()) {
    //     reverseQueue.push(q.back());
    //     q.pop();    
    //     cout << "Reversed element: " << reverseQueue.back() << endl;

    // Revese 1,2,3,4 to 4,3,2,1 using stack

    stack<int> s;
    // while (!q.empty()) {
    //     s.push(q.front());
    //     q.pop();
    //     cout << s.top() << endl;

    // }
    // while (!s.empty()) {
    //     q.push(s.top());
    //     s.top();
    //     s.pop();
    // }

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    cout << "Reversed Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
    }