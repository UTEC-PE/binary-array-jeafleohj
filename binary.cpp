#ifndef BOOLEAN_H
#define BOOLEAN_H
#include <cmath>

class Boolean {
	char* array;
	int size;
    
public:
	Boolean(int size)
		: size(size)
	{
		int s = int(ceil(size/8.));
		array = new char[s];
	}
        
	void bitOn(int position) {
		if( position > size) return;
		int pa,pl;
		pa = position / 8;
		pl = position % 8;
		char aux = 1;
		aux = aux << pl;
		array[pa] = aux | array[pa];
	}
             
	void bitOff(int position) {
		if( position > size) return;
		int pa,pl;
		pa = position / 8;
		pl = position % 8;
		char aux = ~array[pa];
		aux = aux | ~(1<<pl);
		array[pa] = aux & array[pa];
	}
             
	bool operator[](int position) {
		if( position > size) return false;
		int pa,pl;
		pa = position / 8;
		pl = position % 8;
		char aux = array[pa];
		aux = aux & (1<<pl);
		return 1 == aux>>pl;
	}
    
	void clear() { 
		for(int i = 0; i<size; i++)
			array[i] &= 0;
	}
             
	~Boolean() {
		delete[] array;
	}
};

#endif
