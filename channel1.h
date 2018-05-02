//
// Created by lishoulin on 18/4/27.
//

#ifndef UNTITLED_CHANNEL1_H
#define UNTITLED_CHANNEL1_H

#endif //UNTITLED_CHANNEL1_H

#include <fstream>
#include <iostream>

class Shape {
public:
    void setW(int w) {
        this->w = w;
    }

    void setH(int h) {
        this->h = h;
    }

    int getW() {
        return this->w;
    }

    int getH() {
        return this->h;
    }

protected:
    int w;
    int h;
};


class PaintCost {
public:
    virtual int getCost(int area) {
        return area * 70;
    }
};

class Rectangle : public Shape, public PaintCost {
public:
    int getArea() {
        return this->w * this->h;
    }

    int getCost(int area) override {

        return 30 * area;
    }
};


class Box {
public:
    virtual double getVolume()=0;
};

class Box1 : public Box {

public:
    double getVolume() override {

        return 1.0;
    }
};

class filemanager {
public:
    filemanager(char *filename) {
        this->filename = filename;
    }

    virtual const char *readFile()=0;

    virtual bool writeFile()=0;

protected:
    char *filename;
};
