// week07-3.cpp 學習計畫 Simulation 第4題
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0, d = 0;
        for (char c : instructions){
            if (c=='R') d = (d+1) % 4;
            if (c=='L') d = (d-1+4) % 4;
            if (c=='G'){
                if (d==0) y++;
                if (d==1) x++;
                if (d==2) y--;
                if (d==3) x--;
            }
        }
        if (x==0 && y==0) return true;
        if (d != 0) return true;
        return false;
    }
};
