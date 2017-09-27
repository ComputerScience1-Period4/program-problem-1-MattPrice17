/*
Matt Price - 4
Display Text
Introduction to C++ Visual Studios
Printing out statements to console from code
*/

//Libraries
#include <iostream> // cout, cin, end1 <<, >>
#include <conio.h> ?? pause() fun access to _getch() and _kbhit()
// Namespaces
using namespace std;

// Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//Main
void main() {
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';
	char W = 'W';
	char r = 'r';
	char d = 'd';
	// Display Text "Hello World"
	cout << "Hello" << "World" << endl;
	cout << H << e << l << l << o << "" << W << o << r << l << d << endl;
	cout << "Matt Price 4" << endl;
	pause();
	return;
}