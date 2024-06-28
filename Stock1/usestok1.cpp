// usestok1.cpp -- pouziti tridy Stock
#include <iostream>
#include "stock1.h"

int main()
{
	using std::cout;
	using std::ios_base;
	cout.precision(2);		// #.## format
	cout.setf(ios_base::fixed, ios_base::floatfield);	// #.## format
	cout.setf(ios_base::showpoint);		// #.## format

	cout << "Vytvoreni novych objektu pomoci konstruktoru\n";
	Stock stock1("NanoSmart", 12, 20.0);		// syntax 1
	stock1.show();
	Stock stock2 = Stock("Boffo Objects", 2, 2.0);		// syntaxe 2
	stock2.show();

	cout << "Dosayeni stock1 do stock2:\n";
	stock2 = stock1;
	cout << "Vypis stock1 a stock2:\n";
	stock1.show();
	stock2.show();

	cout << "Obnova objektu pomoci konstruktoru \n";
	stock1 = Stock("Nifty Foods", 10, 50.0);		// docasny objekt
	cout << "Obnoveny stock1:\n";
	stock1.show();
	cout << "Hotovo\n";
	return 0;
}
