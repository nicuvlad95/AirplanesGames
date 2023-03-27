#pragma once

enum class LocationState {
    EMPTY,
    SHIP,
    HIT,
    MISS
};

class Location {
public:
    Location();

    bool isShip()const;

    bool isHit()const;

    bool isMiss()const;

    void setShip();

    void markHit();

    void markMiss();

private:
    LocationState state;
};
