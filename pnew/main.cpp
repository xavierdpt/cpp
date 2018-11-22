#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class A {
private:
	int x;
	int y;
public:
	A(int x, int y) : x(x), y(y) {}
	int getX() const { return x; }
	int getY() const { return y; }
};

int main(int argc, char** argv) {

	unsigned char buf[sizeof(A)];
	new (buf) A(7,10);

	vector<unsigned char> v(buf, buf + sizeof(buf) / sizeof(buf[0]) );

	cout << hex << setfill('0')   ;
	for(vector<unsigned char>::const_iterator it = v.begin() ; it != v.end() ; ++it) {
		cout <<  setw(2) << static_cast<unsigned int>(*it) << endl;
	}
	cout << dec << noshowbase;

	const A * const a = reinterpret_cast<const A * const>(&buf);
	cout << dec << a->getX() << endl;
	cout << dec << a->getY() << endl;

	return EXIT_SUCCESS;
}
