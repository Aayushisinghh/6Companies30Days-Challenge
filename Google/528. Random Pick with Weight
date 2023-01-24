class Solution {
public:
    int sum = 0;
    vector<int> range;
    Solution(vector<int>& w) {
        for(int i: w) {
            sum += i;
            range.push_back(sum);
        }
    }
    
    int pickIndex() {
        return lower_bound(range.begin(), range.end(), rand()%sum+1)-range.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
