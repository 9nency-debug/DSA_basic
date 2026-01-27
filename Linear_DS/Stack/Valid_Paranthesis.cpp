#include <iostream>
#include <stack>
using namespace std;

class solution {
    public:
    bool isValid(string s) {
        stack<char> str;

        // For each loop to traverse the string

        for (char ch : s) {

            // If opening bracket, push to stack

            if (ch == '(' || ch == '{' || ch =='[') {
                str.push(ch);
            } else {

                // If stack is empty for closing bracket, return false

                if (str.empty()) return false;

                // Check for matching pairs

                char top = str.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                        return false;
                    }
                }
            }

        // if stack is empty at the end, return str.empty();

            return str.empty();
            }
        };

        int main() {
            solution s;
            // string str = "{[()]}";
            cout << s.isValid("{[()]}") << endl;
            return 0;
        }
