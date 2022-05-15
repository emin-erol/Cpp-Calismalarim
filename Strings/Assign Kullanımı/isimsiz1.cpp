#include <iostream>
#include <string>
using namespace std;

int main(){
    string isim1 = "Emin";
    string isim2;
    isim2.assign(isim1); // isim2 stringine .assign diyerek içine girdiğimiz değeri ona atarız.
    cout << isim2;
    return 0;
}