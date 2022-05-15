#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
	int x;
	int y;
	int z;
};

int main(){
	struct node *a;
	a = (node*)malloc(sizeof(node));
	a->x = 3;  // -> islemi ile icine girebiliriz
	a->y = 4;
	a->z = 5;
	cout << a->x << " " << a->y << " " << a->z << endl;
	(*a).x = 5; // parantez icine yazarak nokta ile icine girebiliriz
	(*a).y = 6;
	(*a).z = 7;
	cout << (*a).x << " " << (*a).y << " " << (*a).z;
	return 0;
}

