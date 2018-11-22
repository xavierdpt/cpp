#include <iostream>

using namespace std;

class A {
	int a;
	int b;
public:
	A(int b, int a) : a(a), b(b) {}
	int getA() const { return a; }
	int getB() const { return b; }
};

struct B {
	int a;
	int b;
};

struct C {
	int a;
	int b;
	C(int b, int a) : a(a), b(b) {}
	int getA() const { return a; }
	int getB() const { return b; }
};


int main(int argc, char** argv) {
	cout << "Hello World !" << endl;
	cout << "Hello World !" << endl;
	const A a {1,2};
	cout << a.getA() << endl;
	cout << a.getB() << endl;

	const B b {1,2};
	cout << b.a << endl;
	cout << b.b << endl;

	const C c1 {1,2};
	cout << c1.getA() << endl;
	cout << c1.getB() << endl;

	return EXIT_SUCCESS;
}
