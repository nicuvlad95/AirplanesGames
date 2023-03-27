#pragma once
#include <vector>
#include "location.h"

using namespace std;

class Airplane {
public:
    Airplane(int size);

    bool isDistroy();

    void placeAirplane(const vector<vector<Location>>& board);

    bool isHit(int x, int y, const vector<vector<Location>>& board);

private:
    int size;
    int hits;
    vector<Location*> locations;
};
