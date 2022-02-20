class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
       sort(intervals.begin(), intervals.end(), [](auto a, auto b) {
            if(a.front() == b.front()) return a.back() > b.back();
            return a.front() < b.front();
        });
        int last = intervals[0][1];
        int res = 1;
        // for each interval, if it's covered by last interval, ignore it
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][1] > last) {
                last = intervals[i][1];
                ++res;
            }
        }
        return res;
    }
};