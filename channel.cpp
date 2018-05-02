//
// Created by lishoulin on 18/4/27.
//

#include "channel.h"
#include <iostream>
#include <fstream>

using namespace std;

bool equary(char *str1, char *str2);

void open_file();

int main() {
    char str1[] = "hello world \n";
    size_t length = strlen(str1);
    char str2[length];
    strcpy(str2, str1);

    printf(str2);

    char str3[] = {"my"};
    strcat(str3, str2);

    printf(str3);

    bool issame = equary(str1, str2);

    std::cout << boolalpha << issame << endl;


    char str4[] = "hello12345";


    char *s = strstr(str4, "3");
    std::cout << s << endl;


    char *i = strchr(str4, '4');

    std::cout << i << endl;


    string hello = "hello";

    hello.append("xxx");

    std::cout << hello << endl;
    int ii = hello.find("lo");
    std::cout << ii << endl;

    hello.replace(ii, 2, "ss");
    std::cout << hello << endl;


    channel chan = channel(10);
    chan.setLen(20);
    std::cout << chan.getLen() << endl;

    open_file();

    return 0;
}

bool equary(char *str1, char *str2) {
    int isSame = strcmp(str1, str2);
    return isSame == 0;
}

void open_file() {
    char str[255];
    ifstream file;
    file.open("/Users/lishoulin/Desktop/OpenCV/clearn/test.txt");

    cout << str << endl;
}

