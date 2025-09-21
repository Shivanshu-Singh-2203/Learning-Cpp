#include <bits/stdc++.h>
using namespace std;

class Stack {
    queue<int> q1, q2;

public:
    void push(int x) {
        q1.push(x);
        cout << "Element pushed " << x << endl;
    }

    int pop() {
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return -1;
        }

        // Move all except last
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q1.pop();

        // Swap queues
        swap(q1, q2);
        return topElement;
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!\n";
            return -1;
        }

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q2.push(topElement);
        q1.pop();

        swap(q1, q2);
        return topElement;
    }

    int size() {
        int s = q1.size();
        cout << "The size of the stack is " << s << endl;
        return s;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;
    cout << "Popped element: " << st.pop() << endl;
    cout << "Top element: " << st.top() << endl;

    st.size();

    st.push(40);
    cout << "Top element: " << st.top() << endl;
    st.size();

    return 0;
}

