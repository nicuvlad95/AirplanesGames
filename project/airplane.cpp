#include "airplane.h"

Airplane::Airplane(int size) : size(size), hits(0) {
    locations.resize(size);
}

bool Airplane::isDistroy() {
    return hits == size;
}

void Airplane::placeAirplane(const vector<vector<Location>>& board) {
    
};

bool Airplane::isHit(int x, int y, const vector<vector<Location>>& board) {
    return 0;
};