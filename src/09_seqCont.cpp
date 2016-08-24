/*
 * cpp_primer04_seq_container.cpp
 *
 *  Created on: 2016Äê7ÔÂ21ÈÕ
 *      Author: strongman
 */

#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <iterator>

#include <algorithm>

using namespace std;

bool contains(vector<int>::const_iterator first,
			  vector<int>::const_iterator last, int value);
void emplace_test();

vector<int>::const_iterator search_iter(vector<int>::const_iterator first,
										vector<int>::const_iterator last,int value);
void ex_9_14();

int main(int argc, char* argv[]) {

	/*	std::vector<int> ivec{ 1, 9, 1, 9, 9, 9, 1, 1 };
	 vector<int>::const_iterator beg = ivec.cbegin();
	 vector<int>::iterator index = ivec.begin();
	 cout << *index << endl;
	 auto end = ivec.cend();

	 auto x = contains(beg, end, 0);
	 cout << x << endl;

	 cout<<"this is the final, fuck eclipse error"<<endl;*/

	/*emplace_test();*/
	/*insert one block to the container,
	 the block at that position, and those behind this one will move backward 1 step*/

//search_iter test-----------------------------------
/*vector<int> ivec{1,2,3,4,5,6,9,10};
	auto first= ivec.cbegin();
	auto last = ivec.cend();
	vector<int>::const_iterator x = search_iter(first,last, 10);
*/

//ex_9_14 test-----------------------------------
	ex_9_14();
}

/*
 * exe 9_4
 * write a function that takes a pair of iterators
 * to a vector<int> and an int value.
 * Look for that value in the range and return a bool
 * indicating whether it was found.
 */

bool contains(vector<int>::const_iterator first,
		vector<int>::const_iterator last, int value) {

	for (; first != last; ++first)
		if (*first == value)
			return true;
	return false;
}

void emplace_test() {
	vector<int> myvector = { 10, 20, 30 };
	auto it = myvector.emplace(myvector.begin() + 1, 100);
	myvector.emplace(it, 200);
	myvector.emplace(myvector.end(), 300);
	std::cout << "mvector contains:";
	for (auto& x : myvector) {
		cout << endl;
		cout << " " << x;

	}
}

/* ex_9_5
 * Rewrite 9_4, to return an iterator to the requested element.
 * Note that the program must handle the case where the element is not
 * found.
 */

vector<int>::const_iterator search_iter(vector<int>::const_iterator first,
		vector<int>::const_iterator last,int value) {

	for(;first!=last;first++)
	{
		if(*first==value) return first;
	}
	return last;
}

/* ex_9_14
 * Write a program to assign the elements
 * from a list of char* pointers to C-ctyle character strings
 * to a vector of strings
 */
void ex_9_14(){
	list<char*> mylist;
	vector<string> strVec;
	mylist.push_back("hello");
	mylist.push_back(" ");
	mylist.push_back("today is a nice day!");

	auto iter = mylist.begin();
	auto iter2 = strVec.begin();
	while(iter!=mylist.end())
	{
		cout<<*iter<<endl;
		strVec.push_back(*iter);
		iter++;
	}

	for(auto i: strVec)
	{
		cout<<i<<endl;
	}



}
