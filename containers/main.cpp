#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <memory>

using namespace std;

void dump(const list<int> &c) {
	cout<<"(";
	list<int>::const_iterator pos;
	for( pos = c.begin() ; pos != c.end() ; ++pos) {
		cout << *pos << ",";
	}
	cout<<")"<<endl;
}

void dump(const vector<int> &c) {
	cout<<"(";
	vector<int>::const_iterator pos;
	for( pos = c.begin() ; pos != c.end() ; ++pos) {
		cout << *pos << ",";
	}
	cout<<")"<<endl;
}

void dump(const deque<int> &c) {
	cout<<"(";
	deque<int>::const_iterator pos;
	for( pos = c.begin() ; pos != c.end() ; ++pos) {
		cout << *pos << ",";
	}
	cout<<")"<<endl;
}


/*
bidirectional iterators : list
random access iterators : vector and deque
functional
vector list deque
*/

class A {
private:
	int x;
	//A(const A&){}
public:
	A() : x(0) {}
	A(int x) : x(x) {}
	int getX() const { return x; }
	void setX(int x) { this-> x = x; }
};

int main(int argc, char** argv) {
	/*
	vector
		list
		deque
		stack
		queue
		priority_queue
		less
		*/
	cout << "Hello World !" << endl;

	vector<int> v1;
	dump(v1);
	vector<int> v2(10,3);
	dump(v2);
	vector<int> v3(v2.begin(),v2.end());
	dump(v3);
	vector<int> v4(v2);
	dump(v4);
	v2.push_back(7);
	dump(v2);
	vector<int>::iterator r = v2.insert(v2.begin(), 8);
	dump(v2);
	v2.insert(r+2, 88);
	dump(v2);
	v2.insert(v2.begin(), 3, 11);
	dump(v2);
	v2.insert(v2.end(), 1, 17);
	cout<<v2.front()<<endl;
	cout<<v2.back()<<endl;
	
	list<int> l1;
	dump(l1);
	list<int> l2(11,4);
	dump(l2);
	l2.push_front(7);
	dump(l2);

	deque<int> d1;
	dump(d1);
	deque<int> d2(12,5);
	dump(d2);

	const A a {777};
	shared_ptr<A> pa  = make_shared<A>(a);
	vector<shared_ptr<A>> v;
	v.push_back(pa);
	cout<<v.front().get()->getX()<<endl;
	v.front().get()->setX(8);
	cout<<v.front().get()->getX()<<endl;
	cout<<a.getX()<<endl;

	return 0;
}
