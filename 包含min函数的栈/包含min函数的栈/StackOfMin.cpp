#include<iostream>
#include<stack>
using namespace std;
template<class T>
class Stack
{
public:
	Stack()
	:min(0)
	{}

	void Push(const T data)
	{
		if (sa.empty())
		{
			sa.push(data);
			assist.push(data);
			min = data;
		}
		else
		{
			if (data > min)
			{
				sa.push(data);
			}
			else
			{
				sa.push(data);
				assist.push(data);
				min = data;
			}
		}
		return;
	}
	void Pop()
	{
		if (sa.empty())
		{
			return;
		}
		if (sa.top() > min)
		{
			sa.pop();
		}
		else
		{
			sa.pop();
			assist.pop();
			min = assist.top();
		}
	}
	T& Min()
	{
		return min;
	}
	~Stack()
	{

	}
private:
	stack<T> sa;
	                //¸¨ÖúÕ»
	stack<T> assist;
	T min;
};
int main()
{
	Stack<int> s;
	s.Push(10);
	s.Push(67);
	s.Push(7);
	s.Push(7);
	s.Push(0);
	s.Push(56);
	cout << s.Min() << endl;
	s.Pop();
	s.Pop();
	s.Pop();
	cout << s.Min() << endl;
	system("pause");
	return 0;
}