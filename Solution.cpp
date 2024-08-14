
#include <string>
#include <vector>
using namespace std;

class Solution {

public:
    int finalPositionOfSnake(int sideOfSquareMatrix, const vector<string>& commands) const {
        int horizontalPosition = 0;
        int verticalPosition = 0;

        for (const auto& command : commands) {
            if (command == "LEFT") {
                --horizontalPosition;
            }
            else if (command == "RIGHT") {
                ++horizontalPosition;
            }
            else if (command == "DOWN") {
                ++verticalPosition;
            }
            else if (command == "UP") {
                --verticalPosition;
            }
        }
        return verticalPosition * sideOfSquareMatrix + horizontalPosition;
    }
};
