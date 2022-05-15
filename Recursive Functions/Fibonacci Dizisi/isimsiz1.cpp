#include <iostream>
using namespace std;

void Fibonacci(int b,int i,int s,int a){
    if(s == 0){
        cout << b << "  ";
        Fibonacci(b,i,s+1,a);
    }
    else if(s == 1){
        cout << i << "  ";
        Fibonacci(i,b+i,s+1,a);
    }
    else if(s != a){
        cout << i << "  ";
        Fibonacci(i,b+i,s+1,a);
    }
    else {
        exit(0);
    }
}

int main(){
    int adet;
    cout << "Sayi adetini giriniz: ";
    cin >> adet;
    Fibonacci(1,1,0,adet);
    return 0;
}