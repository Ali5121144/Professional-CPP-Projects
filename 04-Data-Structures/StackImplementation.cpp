#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> numbers;

    numbers.push(10);
    numbers.push(20);
    numbers.push(30);

    cout << "Top Element: " << numbers.top() << endl;

    numbers.pop();

    cout << "After Pop Operation:" << endl;

    while(!numbers.empty()) {

        cout << numbers.top() << endl;
        numbers.pop();
    }

    return 0;
}
