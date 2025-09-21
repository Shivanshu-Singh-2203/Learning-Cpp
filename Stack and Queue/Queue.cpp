#include <bits/stdc++.h>
using namespace std;

class Queue {
    int size, start, end;
    int* arr;

public:
    Queue(int val = 1000) {
        size = val;
        arr = new int[size];
        start = 0;
        end = -1;
    }

    void push(int x);
    void pop();
    void top();
    void topAfterPop();
    void getSize();
    void printQueue();
};

void Queue::printQueue() {
    if (end < start) {
        cout << "Queue is empty." << endl;
        return;
    }
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Queue::push(int x) {
    if (end == size - 1) {
        cout << "Queue overflow" << endl;
        return;
    }
    end++;
    arr[end] = x;
    cout << "Queue after push : ";
    printQueue();
}

void Queue::pop() {
    if (start > end) {
        cout << "Queue empty." << endl;
        return;
    }
    start++;
    cout << "Queue after pop : ";
    printQueue();
}

void Queue::top() {
    if (start > end) {
        cout << "Queue empty." << endl;
        return;
    }
    cout << "Top element : " << arr[start] << endl;
}

void Queue::topAfterPop() {
    if (start > end) {
        cout << "Queue empty after deletion." << endl;
        return;
    }
    cout << "Top element after deletion : " << arr[start] << endl;
}

void Queue::getSize() {
    if (start > end) {
        cout << "Size of the queue is 0" << endl;
    } else {
        cout << "Size of the queue is " << (end - start + 1) << endl;
    }
}

int main() {
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);

    q.top();
    q.getSize();

    q.pop();
    q.topAfterPop();

    q.pop();
    q.topAfterPop();

    q.pop();
    q.topAfterPop();

    return 0;
}

