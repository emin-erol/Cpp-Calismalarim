#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *sonraki;
};

int main(){
	node *ilkdugum;
	ilkdugum = (node *)malloc(sizeof(node));
	ilkdugum->data = 17;
	node *ikincidugum;
	ikincidugum = (node *)malloc(sizeof(node));
	ilkdugum->sonraki = ikincidugum;
	ikincidugum->data = 29;
	ikincidugum->sonraki = NULL;
	cout << ilkdugum->data << " => " << ikincidugum->data << endl;
	return 0;
}

