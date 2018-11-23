#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class Base {
public:
	virtual ~Base() {}
	virtual void foo() = 0;
};

class X : virtual public Base {
private:
	int x;
public:
	X(int x) : x(x) { }
	int getX() const { return x; }
	void foo() {
		cout << "Hello from X ; x = " << x << endl;
	}
};

class Y : virtual public Base {
private:
	int y;
public:
	Y(int y) : y(y) { }
	int getY() const { return y; }
	void foo() {
		cout << "Hello from Y ; y = " << y << endl;
	}
};

class XY : public X, public Y {
public:
	XY(int x, int y) : X(x), Y(y) { }
	void foo() {
		cout << "Hello from XY ; x = " << getX() << " and y = " << getY() << endl;
	}
};

int main(int argc, char** argv) {

	cout << "Hello World !" << endl;
	shared_ptr<Base> pxy(new XY(1,2));
	vector<shared_ptr<Base>> v;
	v.push_back(pxy);
	v.front()->foo();
	return EXIT_SUCCESS;
}
