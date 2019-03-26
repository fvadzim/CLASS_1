#include <iostream>
#include <cstring>
#include "VIEKT.h"
//#include "rsz_lib"

//int *Resize(int * a, int oldSize, int newSize);

using  namespace std;
int main() {
    int n;
    cin >> n;
    VIEKT a (n);
    a.print();
    a.riverse();
    a.print();
    cout << endl;
    a.ensert(7);
    a.print();
    cout << endl << a.kapacity() << endl << a.siz_e() << endl << a.elt(3);
    cout << endl;
    a.ensert(82);
    a.print();
    return 0;
}