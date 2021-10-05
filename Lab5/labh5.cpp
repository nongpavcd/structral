#include <iostream>
using namespace std;
void demo(int v, int &r) ;

int main() {
    int v = 7;
    int r = 7;
    cout << "inside main() " << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;

    demo(v, r);
    
    cout << "inside main()--after calling demo()" << endl;
    cout << "v = " << v << ", address = " << &v << endl;
    cout << "r = " << r << ", address = " << &r << endl;
    return 0;
}
