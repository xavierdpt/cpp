#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class A;

class F {
public:
	static void foo(const A &a);
};

class A {
private:
	int x;
public:
	A(int x) : x(x) {}
	int getX() const { return x; }
	friend void F::foo(const A&);
};


void F::foo(const A &a) {
	cout << "Hello from F ; x = " << a.x << endl;
}

int main(int argc, char** argv) {

	cout << "Hello World !" << endl;

	A a {5};
	cout << a.getX() << endl;
	F::foo(a);


	return EXIT_SUCCESS;
}
