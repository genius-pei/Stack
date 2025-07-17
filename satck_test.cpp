#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
#include<stack>
#include<queue>
using namespace std;
int main()
{
	yiming::stack<int,vector<int>> st;
	st.push(10);
	st.push(12);
	st.push(15);
	st.push(23);
	st.push(11);
	cout << st.top() << " " << endl;
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();

	}
	return 0;
}