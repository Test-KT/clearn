//
// Created by lishoulin on 18/4/27.
//

#include "channel1.h"
#include <iostream>
#include <string>
#include <streambuf>

using namespace std;

class fileManager1 : public filemanager {
public:
    fileManager1(char *filename) : filemanager(filename) {
    }

    const char *readFile() override {
        char *str = NULL;
        ifstream infile;
        infile.open(this->filename);
        if (!infile) {
            std::cout << "open file fail!" << endl;
        }

        string readStr((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());

        infile.close();

        return readStr.c_str();;
    }

    bool writeFile() override {
        ofstream outfile;
        outfile.open(this->filename, ios::app);
        if (!outfile) {
            std::cout << "open file fail!" << endl;
            return false;
        }
        outfile << "hello world" << endl;
        outfile.close();
        return true;
    }

};

int main() {
    Shape shape;
    shape.setW(1);
    shape.setH(2);

    std::cout << shape.getH() << endl;

    Rectangle rectangle;
    rectangle.setW(5);
    rectangle.setH(6);

    std::cout << rectangle.getArea() << endl;
    std::cout << rectangle.getCost(rectangle.getArea()) << endl;

    Box1 box1;
    std::cout << box1.getVolume() << endl;
    fileManager1 fileManager1("/Users/lishoulin/Desktop/OpenCV/clearn/test.txt");
    const char *str = fileManager1.readFile();
    std::cout << str << endl;


    fileManager1.writeFile();

    return 0;
}


