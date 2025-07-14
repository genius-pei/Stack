#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> st;
	st.push(1);
	st.push(3);
	st.push(4);
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
	return 0;
}