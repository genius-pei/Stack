#pragma once
#include<iostream>
#include<list>
#include<vector>
namespace yiming
{

	template<class T, class Contanier>
	class stack
	{
	public:
		void push(const T& x)
		{
			con.push_back(x);
		}
		void pop()
		{
			con.pop_back();
		}
		size_t size()const
		{
			return con.size();
		}
		bool empty() const
		{
			return con.empty();
		}
		const T& top() const
		{
			return con.back();
		}
	private:
		Contanier con;
	};
}
