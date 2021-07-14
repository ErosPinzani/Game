//
// Created by erosp on 07/07/2021.
//

#include "../../Include/Objects/Object.h"

Object::Object(): equipped(false) {}

void Object::get() {}

bool Object::use() {
    return true;
}

void Object::setPosition(sf::Vector2f vector) {
    position = vector;
    rect.setPosition(position);
    sprite.setPosition(rect.getPosition());
}

void Object::update() {
    counterLifeTime--;
    if(counterLifeTime <= 0)
        active = false;
}