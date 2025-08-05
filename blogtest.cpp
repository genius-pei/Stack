#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
using namespace std;
int main()
{
		priority_queue<int> pq;
		pq.push(3);
		pq.push(5);
		pq.push(6);
		pq.push(1);
		pq.push(9);
		while (!pq.empty())
		{
			cout << pq.top();
			pq.pop();
		}
		return 0;
	

}