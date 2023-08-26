//Kadanes algorithm
#include<limits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = numeric_limits<int>::max();
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < maxi)
                maxi = nums[i];
        }

        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            maxi = max(sum,maxi);
            if(sum < 0)
                sum = 0;
        }
        return maxi;
    }
};