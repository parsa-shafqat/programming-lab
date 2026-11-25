/*
lAB : 02
Name : Parsa shafqat
Roll no : 08-SET-01
Date : 25-11-26
purpose : fix bug 
*/
#include <iostream>
// Bug No:01 missing ; after std
using namespace std;

int main()
{
	// Bug No:02 missing ; after endl
	 cout<<"Wellcome to the lab!"<< endl;
	 // Bug No:03 Cout-C is case sensitive (correct is cout) and . is inside the comma
	 cout<<"Today we learn\"c++.\"" << endl;
	 // Bug No: 04 To print backslash in output double backslash(\\l) is use
	 cout<<"Files are in C:\\lab01"<< endl;
	 // Bug No: 05 (") is missing after bye!
	 cout<<"Bye!"<< endl;
	 return 0;
	 
}

