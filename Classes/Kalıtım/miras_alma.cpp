#include <iostream>
using namespace std;

class A{
    public:
        int x;
};

class B{
    protected:
        int y;
};

class C{
    private:
        int z;
    public:
        void SetZ(int deger){
            z = deger;
        }
        void GetZ(){   // z değeri private olduğu için bulunduğu classtan erişim sağlayabiliyoruz
            cout << z << endl;
        }
};

class D:public A,public B,public C{
    public:
        D(){
            y = 5;
        }
        void GetY(){
            cout << y << endl; // Y değerine ise protected olduğu için yalnızca miras alan classtan erişebiliyoruz
        }
};

int main(){
    D d1;
    d1.x = 10; // Mainden yalnızca public değere yani x'e ulaşabiliyoruz.
    cout << d1.x << endl;
    d1.GetY();
    d1.SetZ(134);
    d1.GetZ();
    return 0;
}