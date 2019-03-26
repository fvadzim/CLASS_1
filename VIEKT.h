//
// Created by citizen4 on 24.3.19.
//

#ifndef MYCLASS_VIEKT_H
#define MYCLASS_VIEKT_H


class VIEKT {
private:
    int n;
    int j;
    int *a;
public:
   VIEKT(int s);
   void print();
   void riverse();
   int siz_e();
   int kapacity();
   int elt(int x);
   //int Resize(int * a, int oldSize, int newSize);
   void ins(int x);
   void ensert(int x);
};


#endif //MYCLASS_VIEKT_H
