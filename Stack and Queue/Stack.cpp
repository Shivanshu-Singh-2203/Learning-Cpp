#include<bits/stdc++.h>

using namespace std;

class Stack 
{
	int size;
	int top;
	int *arr;

public:
	Stack() {
		size = 1000;
		top = -1;
		arr = new int[size];
	}
	void push(int val) {
		if(top == size-1) {
			cout << "Stack overflow." << endl;
			return;
		}
		top ++;
		arr[top] = val;
	}

	void pop() {
		if (top == -1) {
			cout << "Stack empty." << endl;
			return;
		}
		top --;
	}

	void Top() {
		if(top == -1) {
			cout << "Stack empty." << endl;
			return;
		}
		cout << arr[top] << endl;
	}

	void Size() {
	cout << size << endl; 
	}
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.Top();
    st.pop();
    st.pop();
    st.Size();
    return 0;
}

