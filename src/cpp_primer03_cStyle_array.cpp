/*

 * cpp_primer03_cStyle_array.cpp
 *
 *  Created on: 2016Äê7ÔÂ21ÈÕ
 *      Author: strongman


#include <iostream>
#include <cstring>




using namespace std;

const static string s_l(40, '-');
const static string title = "This is C++ primer, "
		"chapter 03: c_style_array";

void test(); //null terminator, cant use strlen without '\0'
void test2(); //null terminator, it can loop ,
//and check length use pointers
void comparing_strings();

void exe_3_40();

int main(int argc, char* argv[]) {
	cout << s_l << "\n" << title << "\n" << s_l << "\n\n";

	test();
	 comparing_strings();
	//test2();
	exe_3_40();
}

//Null terminator, without null, cant check legth
void test() {
using namespace std;
	char ca[] = { 'c', '+', '+', '\0' };
	//char ca[]={'c','+','+','a'};

	cout << ca << endl;
	cout << strlen(ca) << endl;

}

void test2() {
	const char ca1[] = "A string example";
	const char* cp = ca1;
	while (*cp) {
		cout << *cp << endl;
		++cp;
	}
	//null terminator, it can loop ,
	//and check length use pointers
}

void comparing_strings() {
	string s1 = "A string example";
	string s2 = "A different string";
	if (s1 < s2) {
	}

	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	if (ca1 < ca2) {
	}

}

 exercise : 3_40
 * Write a program to define two char arrays initialized
 * from string literals. Now define a third char array
 * to hold the concatenation of the two arrays.
 * Use strcpy and strcat to cpy the two arrays
 * into the third.

void exe_3_40() {
	const char ca1[] = "A string example";
	const char ca2[] = "A different string";
	constexpr size_t new_size = strlen(ca1)+
			" "+strlen(ca2)+1;
	char cstr3[new_size];
	strcpy(cstr3,ca1);
	strcat(cstr3," ");
	strcat(cstr3,ca2);
	cout<<cstr3<<endl;

}
*/

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
const char cstr1[] = "A string example";
const char cstr2[] = "A different string";
int main()
{
    constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;
    char cstr3[new_size];

    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");
    strcat(cstr3, cstr2);

    std::cout << cstr3 << std::endl;
}
