class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int index;
        while(l<=r)
        {
            int mid = (l + r)/2;
            if(target == nums[mid])
                return mid;
            
            else if(target < nums[mid])
            {
                r = mid - 1;
                index = l;
            }
            else
            {
                l = mid + 1;
                index = l;
            }
        }
        return index;
    }
};