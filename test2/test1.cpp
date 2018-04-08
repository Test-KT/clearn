//
// Created by lishoulin on 18/4/8.
//
#include <iostream>

using namespace std;

typedef int fuckInt;

void testtype();

void testenum();

void hello();

enum Week {
    Mon = 1,
    Tus = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5
};

int main() {
    hello();

    testtype();

    testenum();


    return 0;
}

void hello() {
    cout << "test" << endl;
    cout << "hello world" << endl;
    printf("hello world! \n");
}

void testenum() {
    enum Week w;
    w = Wed;

    cout << w << endl;
}


void testtype() {
    bool iswork;
    char c;
    fuckInt i;
    float f;
    double d;
    wchar_t wt;

    i = 10;

    cout << "bool size " << sizeof(bool) << endl;
    cout << "char size " << sizeof(char) << endl;
    cout << "int size " << sizeof(fuckInt) << endl;
    cout << "float size " << sizeof(float) << endl;
    cout << "double size " << sizeof(double) << endl;
    cout << "wchar_t size " << sizeof(wchar_t) << endl;


    cout << CHAR_MIN << "///" << CHAR_MAX << endl;
}