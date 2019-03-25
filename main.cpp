#include <iostream>
#include "VIEKT.h"
using  namespace std;
int main() {
    int n;
    cin >> n;
    VIEKT a (n);
    a.print();
    a.riverse();
    a.print();
    cout << endl;
    a.ins(7);
    a.print();
    return 0;
}