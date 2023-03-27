#pragma once

enum class LocationState {
    EMPTY,
    SHIP,
    HIT,
    MISS
};

class Location {
public:
    Location() : state(LocationState::EMPTY) {}

    bool isShip() const {
        return state == LocationState::SHIP;
    }

    bool isHit() const {
        return state == LocationState::HIT;
    }

    bool isMiss() const {
        return state == LocationState::MISS;
    }

    void setShip() {
        state = LocationState::SHIP;
    }

    void markHit() {
        state = LocationState::HIT;
    }

    void markMiss() {
        state = LocationState::MISS;
    }

private:
    LocationState state;
};
