#include "location.h"

Location::Location() : state(LocationState::EMPTY) {}

bool Location::isShip() const {
    return state == LocationState::SHIP;
}

bool Location::isHit() const {
    return state == LocationState::HIT;
}

bool Location::isMiss() const {
    return state == LocationState::MISS;
}

void Location::setShip() {
    state = LocationState::SHIP;
}

void Location::markHit() {
    state = LocationState::HIT;
}

void Location::markMiss() {
    state = LocationState::MISS;
}