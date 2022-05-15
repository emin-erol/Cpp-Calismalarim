#include <iostream>
#include <sstream>
using namespace std;

int main(){
    stringstream ss;
    string a = "123";
    int b;
    ss << a;
    ss >> b;
    cout << "Sayi2: " << a << endl;
    cout << "Sayi2: " << b << endl;
    return 0;
}