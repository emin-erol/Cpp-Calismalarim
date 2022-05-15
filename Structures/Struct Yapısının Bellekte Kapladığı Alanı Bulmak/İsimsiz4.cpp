#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Alan{
	int a;
	float b;
	double c;
	char d;
};

int main(){
	cout << "Struct yapisinin bellekte kapladigi alan: " << sizeof(struct Alan);
	return 0;
}

