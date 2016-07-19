#include<iostream>
#include<cctype>
#include<string>
#include <vector>

class Sales_item;

using namespace std;
void read_words_from_stdin_to_vector();
void exe_3_14();
void exe_3_15();
void try_some_operations();
void exe_3_17();
void exe_3_20();
void toupper_iterator();


const static string s_l(40, '-');
const static string title = "This is C++ primer, "
		"chapter 03 vector";
int main(int argc, char* argv[]) {

	cout << s_l << "\n" << title << "\n" << s_l << "\n\n";

	//read_words_from_stdin_to_vector();
	//exe_3_14();
	//exe_3_15();
	//try_some_operations();
	//exe_3_17();
	//exe_3_20();
	toupper_iterator();
	return 0;
}

/*
 * 3.3 Library vector Type
 * 3.3.2 Adding Elements to a vector
 */
void read_words_from_stdin_to_vector() {
	string word;
	vector<string> text;
	while (cin >> word) {
		text.push_back(word);
		text.push_back(" ");

	}
	decltype (text.size()) size = 0;
	for (; size < text.size(); size++) {
		cout << size << ":";
		cout << text[size] << endl;
		;
	}
}
/*exe_3_14:
 * write a program to read a seq of ints
 * from cin and store those values in a vector
 */
void exe_3_14() {
	cout << "exe_3_14" << endl;
	int number;
	vector<int> text;
	while (cin >> number) {
		text.push_back(number);
	}
	for (decltype(text.size()) ix = 0; ix < text.size(); ix++) {
		cout << ix << " ";
		cout << text[ix] << endl;
	}
	for (auto i : text) {
		cout << i << " ";
	}
}

void exe_3_15() {
	string word;
	vector<string> text { };
	while (cin >> word) {
		text.push_back(word);
	}
	for (auto i : text) {
		cout << i << " ";
	}
}

void try_some_operations() {
	vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (auto &i : v)
		i *= i;
	for (auto i : v) {
		cout << i << " ";
	}
	cout << endl;
}

//key Concepts : vectors grow efficiently

//Programming Implications of Adding Elements
//to a vector
//3.3.3 Other Vector Operations
//Computing a vector Index
//Subscripting Does Not Add Elements
void add_elements() {
	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0; ix != 10; ++ix) {
		// WRONG WAY TO ADD ELEMENTS
		//ivec[ix] = ix;

		//RIGHT WAY TO ADD ELEMENTS
		ivec.push_back(ix);
	}
}

/* NOTE:
 * try not to use subscripts , use range for
 * whenever possible
 *
 */

/* exe_3_16:
 * Write a program to print the size and contents
 * of the vectors from exe3.13.check whether your answers
 * to that exercise were correct. If not , restudy 3.3.1 until
 * you understand why you were wrong.
 *
 */

/* exe_3_17:
 * Read a sequence of words from cin and
 * store the values a vector.
 * After you've read all the words,
 * process the vector and change each word
 * to uppercase.
 * Print the transformed elements, eight
 * words to a line.
 */
void exe_3_17() {
	string word;
	vector<string> svec;
	vector<string>::size_type index;

	while (cin >> word)
		svec.push_back(word);

	for (auto &i : svec) {
		for (auto &j : i) {
			j = toupper(j);
		}
	}
	for (auto i : svec) {
		cout << i << " ";
	}
}

/* exe_3_20
 * read a set of ints into a vector.
 * print the sum of each pair of adjacent
 *  elements.
 * Change your program so that it prints
 * the sum of the first and last element
 * followed by the sum of the second to last.
 * and so on.
 */
void exe_3_20() {
	//input 10 number
	vector<int> ivec(10);
	vector<int> result(5);
	int index=0;
	for(auto &i:ivec){
		i=index++;
		cout<<i<<" ";
	}
	cout<<"\n"<<s_l<<endl;

	//my solution
	vector<int>::size_type back_index = ivec.size()-1,front_index = 0;
	cout<<"back_index = "<<back_index<<endl;

	while(front_index<ivec.size() && back_index> ((ivec.size()/2)-1))
	{

		result[front_index]=ivec[front_index]+ivec[back_index];
		cout<<"ivec["<<front_index<<"]+ivec["<<(back_index)<<"] ="<<result[front_index]<<endl;

		front_index++;
		back_index--;
	}
	for (auto j : result) {
		cout << j << " ";
	}
}

/*
 * 3.4 Introducint Iterators
 * like pointers
 * iterators give us indirect access to an object.
 * auto b = v.begin(), e= v.end();
 */
void toupper_iterator(){
	string s("somestring");
	string::iterator itr = s.begin();
	while(itr!=s.end())
	{
		*itr=toupper(*itr);
		itr++;
	}
	cout<<s<<endl;
}

/*
 * Key concept : Generic Programming
 * choose != and = instead of >= and <=
 */

/*Iterator Types*/
void iterator_types(){
	vector<int>::iterator it;
	string::iterator it2;
	vector<int>::const_iterator it3; // can read but cant write
	string::const_iterator it4;//can read but cant write

}
