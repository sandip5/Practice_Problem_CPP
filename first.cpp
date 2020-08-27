#include <iostream>

using namespace std;

class A
{
	public:
	void a()
	{
		cout << "I am In A Method" << endl;
	}
};

class B : public A
{
	public:
	void b()
	{
		cout << "I am in B Method" << endl;
	}
};

int main()
{
	B b;
	A* a = &b;
	//B* a = new B();
	a -> a();
	//a -> b();
	B bb;
	bb.a();
	B* bbb = (B*) a;
	bbb -> b();
	//A* a = new B();
	a->a();
	((B*)a)->b();
}

