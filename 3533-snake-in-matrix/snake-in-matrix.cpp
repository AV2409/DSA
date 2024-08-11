class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {

        
        int r = 0, c = 0;

        for (auto i : commands) {
            if (i == "RIGHT")
                c++;

            if (i == "DOWN")
                r++;

            if (i == "LEFT")
                c--;

            if (i == "UP")
                r--;
        }

        return (r * n) + c;
    }
};