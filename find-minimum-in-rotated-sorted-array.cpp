#include <limits>
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int minv = numeric_limits<int>:: max();
        while(l<=r)
        {
            int mid = (l + r)/2;
            if(nums[l] <= nums[mid])
            {
                minv = min(nums[l],minv);
                l = mid+1;
            }
            else
            {
                minv = min(nums[mid],minv);
                r = mid - 1;
            }
        }
        return minv;
    }
};