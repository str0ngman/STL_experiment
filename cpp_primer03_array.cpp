/*
 * cpp_primer03_array.cpp
 *
 *  Created on: 2016Äê7ÔÂ19ÈÕ
 *      Author: strongman
 */

#include<iostream>
#include<string>
using namespace std;

int txt_size();
void exe_3_27();

int main(){
	exe_3_27();
	return 0;
}

/*	3.5.1 Defining and Initializing built-in Arrays
 *
 *
 */
void build_intArray(){
unsigned cnt = 42;
constexpr unsigned sz = 42;
int arr[10]={0};
int *parr[sz];
string bad[cnt];

//Understand Complicated Array Declarations
int *ptrs[10];
//ptrs is an array of ten pointers

//Q:initialize a ref to a array of ten ints
//int &refs[10] ;//array of reference is pointless, does
//not hold space, could use pointers instead
int (*Parray)[10] = &arr;
int (&arrRef)[10] = arr;

/* by default ,
 *
 * type modifier bind right to left.
 */
}


/* exe_3_27 assuming txt_size is a function
 * that takes no arguments and returns an int
 * value, which of the following definitions are
 * illegal.
 * usinged buf_size = 1024;
 * (1) int ia[buf_size];
 * (2) int ia[txt_size()];
 * (3) int ia[4*7 -14];
 * (4) char st[11] = "fundamental";
 */

int txt_size(){return 10;}
void exe_3_27(){
	unsigned buf_size = 1024;
	int xa[buf_size];
	int ba[txt_size()];
	int ia[4*7-14];
	char st[11]="fundamenta";
}
