#include <iostream>

using namespace std;

void foo(const unsigned char (&str)[12]) {
	cout << sizeof(str) << " from Foo !" << endl;
}

int main(int argc, char** argv) {

	cout << "char: " << sizeof(char) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << endl;

	cout << "short: " << sizeof(short) << endl;
	cout << "char16_t: " << sizeof(char16_t) << endl;
	cout << endl;

	cout << "int: " << sizeof(int) << endl;
	cout << "char32_t: " << sizeof(char32_t) << endl;
	cout << "wchar_t: " << sizeof(wchar_t) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << endl;

	cout << "long: " << sizeof(long) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << endl;

	cout << "long double: " << sizeof(long double) << endl;

	return EXIT_SUCCESS;
}
