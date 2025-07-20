#pragma once
#include<vector>
template<class T>
class Less
{
public:
	bool operator()(const T& x,const T& y)
	{
		return x < y;
	}

};
template<class T>
class Greater
{
public:
	bool operator()(const T& x, const T& y)
	{
		ruturn x > y;
	}
};
namespace yiming
{
   template<class T,class Container=std::vector<T>,class Compare=Less<T>>
   class priority_queue
   {
   public:
	   priority_queue() = default;

	   size_t size()const
		   {
		   return con.size();
		   }
   private:
	   void adjust_up(int child)//向上调整
	   {
		   Compare com;
		   int parent = (child - 1) / 2;

		   while (child > 0)
		   {
			   if (com(con[parent], con[child]))
			   {
				   swap(con[child], con[parent]);
				   child = parent;
				   parent = (child - 1) / 2;
			   }
			   else
			   {
				   break;
			   }
		   }
	   }
   private:
	   Container con;
   };
}
