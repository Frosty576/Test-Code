#include <iostream>
using namespace std;

int main() {
	system("CLS");
	system("pause");

	cout << "(k) Kaffee\n";
	cout << "(e) Espresso\n";
	cout << "(s) Service-Mode\n";

	string x;
	cin >> x;

	if (x == "k") {
		cout << "Sie haben sich f\u0081r die Auswahl Kaffee entschieden.\n";
	}
	if (x == "e")  {
		cout << "Sie haben sich f\u0081r die Auswahl Espresso entschieden.\n";
	}
	if  (x == "s") {
		cout << "Sie haben sich f\u0081r die Auswahl Service-Mode entschieden.\n";
	}
	
	system("pause");
	
	return 0;
}