/*
 * cpp_primer03_string.cpp
 * desc: readings
 * commit:  STL_study.cppPrimer03
 * 			:strings,Vectors,and arrays
 */
#include<iostream>
#include<string>
using namespace std;

void excercise_3_2(int);
void exe_3_4();
void exe_3_5();
void cpp_11_test();
void change_word_to_uppercase();
void random_access();
void exe_3_9();
void exe_3_11();
void exe_3_6();
int main() {
	cout << "cpp_primer03_string\n";
	//excercise_3_2(1);
//	exe_3_4();
//	exe_3_5();
	//cpp_11_test();
	//change_word_to_uppercase();
//	random_access();
	exe_3_6();
	//exe_3_9();
	//exe_3_11();
	return 0;
}

/**
 * 3.1 Namespace using Declarations
 * 3.2 Library string Type
 * 3.3 Library vector Type
 * 3.4 Introducing Iterators
 * 3.5 Arrays
 * 3.6 Multidimensional Arrays
 */

/*3.2 Library string Type*/
//table 3.,1 lists the most common ways to initialize strings
string s1;
string s2 = s1;
string s3 = "hiya";
string s4(10, 'c');

//direct and Copy Forms of Initialization
string s5 = "hiya"; //copy init
string s6("hiya"); //direct init
string s7(10, 'c'); //direct init [good]

/*3.2.2 Operations on strings*/
//Readign and Writing strings
/* Table 3.2: string Operations
 * os<<s  //write s onto output stream os.return os.
 * is>>s   //reads whitespace-sperated string is into s. return is.
 * getline(is, s); //reads a line of input from is into s. Return is
 * s.empty();//return true of false
 * s.size();//return char num
 * s[n] ; //return a ref to the s[n]
 * s1+s2;//returns a string that is the concatenations
 * s1=s2
 * s1==s2
 * s1!=s2
 * <, <=, >, >= Comparisons are case-senstive
 * and use dictionary ordering.
 *
 */

/*read an Unknow number of strings*/
void read_unknow_number_of_strings() {
	string word;
	while (cin >> word) //read until end of file
		cout << word << endl; //wrte each word
							  //followed by a new line
}

void use_getline_to_read_an_entire_line() {
	string line;
	while (getline(cin, line)) {
		cout << line << endl;
	}
}

void string_empty_and_size_operations() {
	string line;
	while (getline(cin, line)) {
		if (!line.empty()) {
			cout << line << endl;
		}
	}
}

void string_size_type_type() {
	string line;
	string::size_type len = line.size();
}
/*
 * exe3.2 write a program to read the standard input
 * to a line at a time. Modify your program to read a word
 * at a time.
 */
void excercise_3_2(int i) {
	cout << "in function exerciese" << endl;

	string line("");
	string word("");
	if (i == 1) {
		while (getline(cin, line)) {
			cout << "in while loop" << endl;
			cout << line << endl;
		}
	} else {
		while (cin >> word) {
			cout << word << endl;
		}
	}
}
/*
 * exe3.4 Write a program to read two strings
 * and report whether the strings are equle.
 * IF not report which of the two is larger.
 * Now , change the program to report whether
 * the strings have the same length , and if not,
 * report which is longer.
 */

void exe_3_4() {
	string line1;
	string line2;
	cin >> line1;
	cin >> line2;
	if (line1 == line2) {
		cout << "those two lines are the same" << endl;
	} else {
		if (line1 > line2) {
			cout << "line1 is larger" << endl;
		} else {
			cout << "line2 is larger" << endl;
		}
	}
	int z = line1.size(), y = line2.size();
	cout << "z = " << z << endl;
	cout << "y = " << y << endl;
	if (z == y) {
		cout << "the same size\n";
	} else {
		if (z > y) {
			cout << "z is bigger" << endl;
		} else {
			cout << "y is bigger" << endl;
		}
	}
}

/**
 * exe3.5 write a program to read strings
 * from the standard input, concatenating
 * what is read into one large string.
 * Print the concatenated string.
 * Next change the program to separate adjacent
 * input input strings by a space;
 */
void exe_3_5() {
	string line(""), line2("");
	while (getline(cin, line2)) {
		line += line2;
	}
	cout << "line = " << line << endl;
}

/*
 * 3.2.3 Dealing with the Characters in a string
 *	processing Every character? Use Range-Based for
 */

void cpp_11_test() {
	string s("Hello World!1!!!!!!");
	decltype(s.size()) punc_cnt = 0;

	for (auto c : s)
		if (ispunct(c))
			++punc_cnt;

	cout << punc_cnt << " puncuation characters in " << s << endl;
}

/*Using a Range for to Change the characters in a string*/
/*Processing only some characters*/
/*Using a subscript for Iteration*/

void change_word_to_uppercase() {
	string s("Hello World!1!!!!!!");
	for (decltype (s.size()) index = 0; index != s.size() && !isspace(s[index]);
			index++) {
		s[index] = toupper(s[index]);
	}
	cout << s << endl;
}

/*Using a subscript for random access*/
void random_access() {							  //very very smart solution
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
			<< "separated by space. Hit Enter when finish:" << endl;
	string result;
	string::size_type n;
	while (cin >> n)
		if (n < hexdigits.size()) {
			result += hexdigits[n];
		}
	cout << "Your hex number is :" << result << endl;
}

/*exe3.6 Use a range for to change all the
 * characters in a string to X
 */
void exe_3_6(){
	string my_string("today i need to finish string");
	cout<<my_string;
	for(decltype(my_string.size())index=0;
				index!=my_string.size();
				index++)
			{
			my_string[index]='x';

			}
	cout<<my_string;
}

/*exe3.7 what would happen if you define the loop control
 * var in the previous exercise as type char?
 * Predict the results and then change your program to use
 * a char to see you were right.
 *
 */

/*exe3.8 Rewrite the program in the first exercise,
 * first using a while and again using a traditional for loop.
 * which of the three approaches do you prefere and why?
 */

/*exe3.9 what does the following program do? Is it valid?
 * if not , why not?
 *
 * string s;
 * cout<<s[0]<<endl;
 */

void exe_3_9() {

	string s;
	int x;
	x = static_cast<int>(s[0]);
	cout << x << endl;
}

/*exe3.10: wirte a Program that reads a string of characters
 * including punctuation and writes what was read but
 * with the puncuation removed.
 */
void exe_3_10(){}


/*exe_3_11:
 * Is the following rang for leagal? if so , what is the type of
 * c?
 *
 * const string s = "keep out!";
 * for(auto &c:s){/*...*/



void exe_3_11() {
	const string s = "keep out!";
	for(auto &c:s){cout<<c;}
}
