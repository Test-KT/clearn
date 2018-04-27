//
// Created by lishoulin on 18/4/27.
//

#ifndef UNTITLED_CHANNEL_H
#define UNTITLED_CHANNEL_H

#include <iostream>

class channel {
private:
    double len;
public:
    double getLen() const;

    void setLen(double len);

    channel(double len);
};

channel::channel(double len) {
    this->len = len;
}

double channel::getLen() const {
    return len;
}

void channel::setLen(double len) {
    channel::len = len;
}


#endif //UNTITLED_CHANNEL_H
