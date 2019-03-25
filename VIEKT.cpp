//
// Created by citizen4 on 24.3.19.
//

#include "VIEKT.h"
#include <iostream>
using namespace std;
VIEKT::VIEKT(int s) {
    a = new int[s];
    n = s;
    for(int i = 0;i < n;i++)
        cin >> a[i];
}
void VIEKT::print(){
    cout << endl;
    for(int i = 0;i < n;i++){
        if(!a[i])break;
        cout << a[i] << ' ';
    }
}

void VIEKT::riverse(){
    for(int i = 0;i < n/2;i++){
        swap(a[i],a[n-1-i]);
    }
}

void VIEKT::ins(int x){
    if(a[n-1])
        n*=2;
    int *t = new int[n];
    for(int i = 0;i < n/2;i++)
        t[i] = a[i];
     t[n/2] = x;
     for(int i = 0;i < n;i++)a[i] = t[i];
    delete [] t;
}