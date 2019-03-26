//
// Created by citizen4 on 24.3.19.
//

#include "VIEKT.h"
#include <iostream>
#include <cstring>
#include "rsz_lib"
using namespace std;
VIEKT::VIEKT(int s) {
    a = new int[s];
    n = s;
    j = s;
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




int VIEKT::kapacity(){
    return n;
}
int VIEKT::siz_e() {
    return j;
}
int VIEKT::elt(int x) {
    return  a[x];
}



void VIEKT :: ensert(int x){
   if(j == n){
       a =  Resize( a,n,n*2);
       n*=2;
   }
    j++;
    a[j-1] = x;
}