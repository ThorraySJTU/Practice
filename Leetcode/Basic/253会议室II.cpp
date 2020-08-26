// 超时算法
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        unordered_map<int, int> h;
        int ans = 1;
        int length = intervals.size();
        for(int i = 0; i < length; i++){
            for(int j = intervals[i][0]; j < intervals[i][1]; j++){
                h[j]++;
                if(h[j] > ans) ans = h[j];
            }
        }
        return ans;
    }
};
// 上下车算法
typedef pair<int, int> PII;
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        vector<PII> p;
        for (auto x : intervals) {
            p.push_back({x[0], 1});
            p.push_back({x[1], -1});
        }
        sort(p.begin(), p.end());
        int cur = 0, ans = 0;
        for (auto x : p) {
            if (x.second == -1) cur --;
            else cur ++;
            ans = max(ans, cur);
        }
        return ans;
    }
};

