#include <iostream>

using namespace std;

void foo(const unsigned char (&str)[12]) {
	cout << sizeof(str) << " from Foo !" << endl;
}

int main(int argc, char** argv) {

	cout << "Hello World !" << endl;

	unsigned char str[] = "hello world";

	cout << sizeof(str) << endl;
	foo(str);

	return EXIT_SUCCESS;
}
