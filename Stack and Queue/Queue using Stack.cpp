/* Implement Queue using Stack */

#include <bits/stdc++.h>
#include <ostream>

using namespace std;
class Queue 
{
public:
	stack < int > output, input;

	Queue(){}
	
	void push(int x);
	int pop();
	int top();
	int size();
};

int Queue::top() {
	if(output.empty()) {
		while(input.size())
		{
			output.push(input.top());
			input.pop();
		}
	}
	cout << "Top of the Queue : " << output.top() << endl;
	return output.top();
}

int Queue::pop() {
	if(output.empty())
	{
		while (input.size()) {
			output.push(input.top());
			input.pop();
		}
	}

	int x = output.top();
	cout << "Element popped : " << x << endl;
	output.pop();
	return x;
}

void Queue::push(int x)
{
	cout << "The element pushed is  " << x << endl;
	input.push(x);
}

int Queue::size()
{
	int x = output.size() + input.size() ;
	cout << "The size of the Queue is " << x << endl;
	return x;
}


int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.top();
    q.pop();
    q.top();
    q.size();
    q.push(40);
    q.top();
    q.size();
    return 0;
}

