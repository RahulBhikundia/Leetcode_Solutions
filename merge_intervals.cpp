class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; 
        sort(intervals.begin(), intervals.end());
        int a = intervals[0][0], b = intervals[0][1], i;
        for(i=0;i<intervals.size()-1;i++)
        {
            vector<int> arr;
            if(b < intervals[i+1][0])
            {
                arr = {a,b};
                ans.push_back(arr);
                a = intervals[i+1][0];
                b = intervals[i+1][1];
            }
            else
            {
                a = min(a,intervals[i+1][0]);
                b = max(b,intervals[i+1][1]);
            }
        }
        vector<int> arr = {min(a,intervals[i][0]),max(b,intervals[i][1])};
        ans.push_back(arr);
        return ans;

    }
};