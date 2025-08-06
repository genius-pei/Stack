#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

#include"priority_queue.h"

//int main()
//{
//yiming::priority_queue <int>pq;
//	pq.push(4);
//	pq.push(5);
//	pq.push(2);
//	pq.push(5);
//	pq.push(6);
//	while (!pq.empty())
//	{
//		cout << pq.top() << " ";
//		pq.pop();
//	}
//	cout << endl;
//	return 0;
//}
int main()
{
priority_queue <int>pq;
	pq.push(4);
	pq.push(5);
	pq.push(2);
	pq.push(5);
	pq.push(6);
	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;


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
	queue<int>q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	while (!q.empty())
	{
		cout << q.front()<<" ";
		q.pop();
	}
	return 0;
}

//·Âº¯Êý
//template<class T>
//class less
//{
//public:
//	bool operator()(const T& x,const T& y)
//	{
//		return x < y;
//	}
//};
//int main()
//{
//	less<int> lessfunc;
//	std::cout << lessfunc(1, 2) << std::endl;
//	return 0;
//}