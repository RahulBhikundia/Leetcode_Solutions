class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int tsum = 0;      // tsum -> total sum
        for(vector<int>::iterator it = nums.begin();it!=nums.end();it++)
            tsum += *it;
        int esum = n*(n+1)/2;
        return esum - tsum;
    }
};