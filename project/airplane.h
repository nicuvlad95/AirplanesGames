#pragma once
#include <vector>
#include "location.h"

using namespace std;

class Airplane {
public:
    Airplane(int size) : size(size), hits(0) {
        locations.resize(size);
    }

    bool isDistroy() const {
        return hits == size;
    }

    void placeAirplane(const vector<vector<Location>>& board);

    bool isHit(int x, int y, const vector<vector<Location>>& board);

private:
    int size;
    int hits;
    vector<Location*> locations;
};
