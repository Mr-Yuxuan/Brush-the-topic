#include<iostream>
using namespace std;
class Comoplex
{
public:
	Comoplex(int _real, int _image) :real(_real), image(_image)
	{

	}
	Comoplex(Comoplex& c)
	{
		cout << "拷贝构造函数" << endl;
		real = c.real;
		image = c.image;
	}
	~Comoplex()
	{
		cout << "析构函数" << endl;
	}
	bool operator==(Comoplex& c)
	{
		return (real == c.real&&image == c.image);
	}
	bool operator!=(Comoplex& c)
	{
		return (real != c.real || image != c.image);
	}
	Comoplex& operator+(const Comoplex& c)
	{
		real = real + c.real;
		image = image + c.image;
		return *this;
	}
	Comoplex& operator+=(Comoplex& c)
	{
		real = real + c.real;
		image = image + c.image;
		return *this;
	}
	Comoplex& operator++()
	{
		real = real + 1;
		image = image + 1;
		return *this;
	}
	void print()
	{
		if (image<0)
		cout << real << image << "i" << endl;
		else
			cout << real<<"+" << image << "i" << endl;
	}
private:
	int real;
	int image;
};
int main()
{
	{ Comoplex c1(4, -2);
	Comoplex c2(2, -4);
	Comoplex c3(0, 0);
	c2 += c1;
	c2.print();
	c3 = c1 + c2;
	c3.print();
	++c3;
	c3.print(); }
	getchar();
	return 0;
}