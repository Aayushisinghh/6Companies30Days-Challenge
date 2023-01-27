class Solution {
public:
vector<int> o;
vector<int> s;
    Solution(vector<int>& n) {
        o = s = n;
    }
    
    vector<int> reset() {
        return o;
    }
    
    vector<int> shuffle() {
        int len = o.size();
        swap(s[rand()%len],s[rand()%len]);
        return s;
    }
};
