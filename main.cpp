#include <iostream>
#include "binary.cpp"
using namespace std;

int main(int argc, char *argv[]) {
    cout << "===========================================================" << endl;
    cout << "Binary Array Practice" << endl;
    cout << "===========================================================" << endl << endl;
	Boolean b(16);
	b.bitOn(12);
	b.bitOn(1);
	b.bitOn(4);
	b.bitOff(12);
	b.clear();
	cout << b[4] << "\n";
    system("read");
    return EXIT_SUCCESS;
}

