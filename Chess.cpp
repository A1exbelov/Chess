#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 8;
// Options for shifting the knight by cells
int dx[N] = { 2, 2, 1, 1, -1, -1, -2, -2 };
int dy[N] = { 1, -1, 2, -2, 2, -2, 1, -1 };

struct Position {
    // Coordinates and distance to the required position
    int x, y, dist;
    // The path to the current position
    string path;
    Position(int x, int y, int dist, string path) : x(x), y(y), dist(dist), path(path) {}
};


int main() {
    string start, end;
    cout << "Enter starting position (e.g. A2): ";
    cin >> start;
    cout << "Enter ending position (e.g. E6): ";
    cin >> end;
    shortestPath(start, end);
    return 0;
}
