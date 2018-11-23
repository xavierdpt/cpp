#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	cout << "Hello World !" << endl;


	vector<int> v {1,2,9,4,5,6,7,8,3};
	list<int> l;
	set<int> s;
	multiset<int> ms;

	cout << v.size() << endl;
	cout << l.size() << endl;
	cout << s.size() << endl;
	cout << ms.size() << endl;

	cout << v.empty() << endl;
	cout << l.empty() << endl;
	cout << s.empty() << endl;
	cout << ms.empty() << endl;

	cout << v.max_size() << endl;
	cout << l.max_size() << endl;
	cout << s.max_size() << endl;
	cout << ms.max_size() << endl;

	stack< vector<int> > vstack;
	stack< list<int> > lstack;
	stack< deque<int> > dstack;

	queue< list<int> > lqueue;
	queue< deque<int> > dqueue;

	sort(v.begin(), v.end());

	for(vector<int>::const_iterator it = v.begin() ; it != v.end() ; ++it) {
		cout << *it << endl;
	}

	vector<int>::const_iterator it = v.end();
	do {
		--it;
		cout << *it << endl;
	}
	while( it != v.begin() );

	cout << (v.end() - v.begin()) << endl;
	cout << (find(v.begin(), v.end(), 5) - v.begin()) << endl;
	cout << count(v.begin(), v.end(), 5)  << endl;

	int numbers[] = { 1, 5, 9, 12 };
	for_each(numbers, numbers+sizeof(numbers)/sizeof(int), [](const int& n) { cout << n << endl; });
	for_each(v.begin(), v.end(), [](const int& n) { cout << n << endl; });

	/*
for_each first last function
find first last value
find_if first last predicate
adjacent_find first last
adjacent_find first last predicate
count first last value n
count_if first last predicate n
mismatch first1 last1 first2
mismatch first1 last1 first2 predicate
equal first1 last1 first2
equal first1 last1 first2 predicate
search first1 last1 first2 last2
search first1 last2 first2 last2 predicate
copy first1 last1 first2
copy_backward first1 last1 first2
swap a b
iter_swap iter1 iter2
swap_ranges first1 last1 first2
transform first1 last1 first2 operator
transform first1 last1 first2 first3 operator
replace first last old new
replace_if first last predicate new
replace_copy first1 last1 first2 old new
replace_copy_if first1 last1 first2 predicate new
fill first last value
fill_n first n value
generate first last gen
generate_n first n gen
remove first last value
remove_if first last predicate
remove_copy first1 last1 first2 value
remove_copy_if first1 last1 first2 pred
unique first last
unique first last predicate
unique_copy first1 last1 first2
unique_copy first1 last1 first2 predicate
reverse first last
reverse_copy first1 last1 first2
rotate first last middle
rotate_copy first1 middle1 last1 first2
random_shuffle first last
random_shuffle first last rand
partition first last predicate
stable_partition first last predicate
sort first last
sort first last comp
stable_sort first last
stable_sort first last comp
partial_sort first middle last
partial_sort first middle last predicate
partial_sort_copy first1 last1 first2 last2
partial_sort_copy first1 last1 first2 last2 comp
nth_element first nth last
nth_element first nth last comp
lower_bound first last value
lower_bound first last value comp
upper_bound first last value
upper_bound first last value comp
equal_range first last value
equal_range first last value comp
binary_search first last value
binary_search first last value comp
merge first1 last1 first2 last2 first3
merge first1 last1 first2 last2 first3 comp
inplace_merge first middle last
inplace_merge first middle last comp
includes first1 last1 first2 last2
includes first1 last1 first2 last2 comp
set_union first1 last1 first2 last2 first3
set_union first1 last1 first2 last2 first3 comp
set_intersection first1 last1 first2 last2 first3
set_intersection first1 last1 first2 last2 first3 comp
set_difference first1 last1 first2 last2 first3
set_difference first1 last1 first2 last2 first3 comp
set_symmetric_difference first1 last1 first2 last2 first3
set_symmetric_difference first1 last1 first2 last2 first3 comp
push_heap first last
push_heap first last comp
pop_heap first last
pop_heap first last comp
make_heap first last
make_heap first last comp
sort_heap first last
sort_heap first last comp
min a b
min a b comp
max a b
max a b comp
max_element first last
max_element first last comp
min_element first last
min_element first last comp
lexicographical_compare first1 last1 first2 last2
lexicographical_compare first1 last1 first2 last2 comp
next_permutation first last
next_permutation first last comp
prev_permutation first last
prev_permutation first last comp
accumulate first last init
accumulate first last init op
inner_product first1 last1 first2 init
inner_product first1 last1 first2 init op1 op2
partial_sum first1 last1 first2
partial_sum first1 last1 first2 op
adjacent_difference first1 last1 first2
adjacent_difference first1 last1 first2 op

== // vecotr list deque set multiset map multimap stack queue
!= // vecotr list deque set multiset map multimap stack queue
< // vecotr list deque set multiset map multimap stack queue
> // vecotr list deque set multiset map multimap stack queue
<= // vecotr list deque set multiset map multimap stack queue
>= // vecotr list deque set multiset map multimap stack queue
= // vector list queue
[] // vector deque map
* // list deque
-> // list deque
() // set multiset map
+ // deque
- // deque
++ // list deque
-- // list deque
+= // deque
-= // deque
begin // vector list deque set multiset map multimap
end // vector list deque set multiset map multimap
rbegin // vector list deque set multiset map multimap
rend // vector list deque set multiset map multimap
empty // vector list deque set multiset map multimap stack queue priority_queue
size // vector list deque set multiset map multimap stack queue priority_queue
max_size // vector list deque set multiset map multimap
front // vector list deque queue
back // vector list deque queue
push_front // list deque
push_back // vector list deque
pop_front // list deque
pop_back // vector list deque
swap // vector list deque set multiset map multimap
insert // vector list deque set multiset map multimap
erase // vector list deque set multiset map multimap
find // set multiset map multimap
count // set multiset map multimap
lower_bound // set multiset map multimap
upper_bound // set multiset map multimap
equal_range // set multiset map multimap
top // stack priority_queue
push // stack queue priority_queue
pop // stack queue priority_queue
capacity // vector
reserve // vector
splice // list
remove // list
unique // list
merge // list
reverse // list
sort // list

for_each // input
find // input
find_if // input
adjacent_find // input
count // input
count_if // input
mismatch // input
equal // input
search // forward
copy // input output
copy_backward // input output
iter_swap // forward
swap_ranges // forward
transform // input output
replace // forward
replace_if // forward
replace_copy // input output
fill // forward
fill_n // output
generate // forward
generate_n // output
remove // forward
remove_if // forward
remove_copy // input output
remove_copy_if // input output
unique // forward
unique_copy // input output
reverse // bidirectional
reverse_copy // output
rotate // forward
rotate_copy // output forward
random_shuffle // random_access
partition // bidirectional
stable_partition // bidirectional
sort // random_access
stable_sort // random_access
partial_sort // random_access
partial_sort_copy // input random_access
nth_element // random_access
lower_bound // forward
upper_bound // forward
equal_range // forward
binary_search // forward
merge // input output
inplace_merge // bidirectional
includes // input
set_union // input output
set_intersection // input output
set_difference // input output
set_symmetric_difference // input output
push_heap // random_access
pop_heap // random_access
make_heap // random_access
sort_heap // random_access
max_element // input
min_element // input
lexicographical_comparison // input
next_permutation // bidirectional
prev_permutation // bidirectional
accumulate // input
inner_product // input
partial_sum // input output
adjacent_difference // input output
*/

	return 0;
}
