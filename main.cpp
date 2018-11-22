#include <iostream>

// https://hownot2code.com/2016/08/12/good-and-bad-sides-of-virtual-inheritance-in-c/
//
namespace {
	const int CST = 5;
	void foo(int x) {
		std::cout<<"Foo ! "<<x<<std::endl;
	}
}

void run( void (*f)(int), int x ) {
	f(x);
}

void cstfoo (int* x) {
	std::cout<<*x<<std::endl;
}

class X {
	private:
		int x = 0;
	public:
		X(int x) {
			this->x = x;
		}
		int getX() {
			return x;
		}
};

class Y {
	private:
		int y = 0;
	public:
		Y(int y) {
			this->y = y;
		}
		int getY() {
			return y;
		}

};

class Z {
	private:
		int x = 0;
		int y = 0;
		int z = 0;
	public:
		Z(int x, int y, int z) : x(x), y(y), z(z) {}
		explicit Z(int x, int y) : x(x), y(y) {}
		int getX() const { return x; }
		int getY() const { return y; }
		int getZ() const { return z; }
};

void fooy(Y& y) {
	std::cout<<y.getY()<<std::endl;
}

void pz(const Z &z) {
	std::cout<<z.getX()<<" ; "<<z.getY()<<" ; "<<z.getZ()<<std::endl;
}

namespace diamond {
	class Base {
	private:
		int v = 7;
	public:
		Base() : v(9) {}
		Base(int v) : v(v) {}
		int getValue() {
			return v;
		}
	};
	class X : public Base {
	public:
		X(int a) : Base(a) {}
	};
	class Y : public Base {
	public:
		Y(int a) : Base(a) {}
	};
	class XY : public X, public Y {
	public:
		XY() : X(3), Y(6) {}
	};
}

namespace diamondv {
	class Base {
	private:
		int v = 7;
	public:
		Base() : v(9) {}
		Base(int v) : v(v) {}
		int getValue() {
			return v;
		}
	};
	class X : public virtual Base {
	public:
		X(int a) : Base(a) {}
	};
	class Y : public virtual Base {
	public:
		Y(int a) : Base(a) {}
	};
	class XY : public X, public Y {
	public:
		XY() : X(3), Y(6) {}
	};

}
// virtual functions
// friends classes
// difference between char*[] and char** ?
// difference between char*[] argv and char* argv[] ?
int main(int argc, char* argv[]) {
	std::cout<<"Hello World ! "<<::CST<<std::endl;
	run(&::foo, 7);
	const int n = 4;
	cstfoo(const_cast<int*>(&n));

	X x = 10;
	fooy(*reinterpret_cast<Y*>(&x));

	const Z z = {7,8,9};
	pz(z);
	const Z z1 {7,8};
	pz(z1);

	const Z z2(z);
	pz(z2);

	std::cout<< (&z == &z2) << std::endl;

	diamond::XY bat;
	std::cout<<"Bat X ! "<<static_cast<diamond::X>(bat).getValue()<<std::endl;
	std::cout<<"Bat Y ! "<<static_cast<diamond::Y>(bat).getValue()<<std::endl;

	diamondv::XY batv;
	std::cout<<"Bat X ! "<<static_cast<diamondv::X>(batv).getValue()<<std::endl;
	std::cout<<"Bat Y ! "<<static_cast<diamondv::Y>(batv).getValue()<<std::endl;
	std::cout<<"Bat XY ! "<<batv.getValue()<<std::endl;
	return EXIT_SUCCESS;
}
