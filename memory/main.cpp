#include <iostream>
#include <memory>
#include <string>

using namespace std;

class A {
	string name = "Name";
public:
	virtual ~A() {
		cout << "A destructed" << endl;
	}
	const string& getName() const {
		return name;
	}
};


int main(int argc, char** argv) {
	cout << "Hello World !" << endl;

	unique_ptr<A> ptr (new A());
	cout << (*ptr).getName() << endl;
	cout << ptr->getName() << endl;

	if(ptr) {
		cout << "Good" << endl;
	}

	ptr.release();

	if(ptr) {
		cout << "Good 2" << endl;
	} else {
		cout << "Bad 2" << endl;
	}



	return EXIT_SUCCESS;
}
