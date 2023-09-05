class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,index = -1;
        vector<int> result;
        while(l<=r)
        {
            int mid = (l + r)/2;
            if(target == nums[mid])
            {
                index = mid;
                break;
            }
            else if(target < nums[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(index == -1)
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int i = index, first, last;
        while(i-1>=0 && nums[i] == nums[i-1]) i--;
        first = i;
        i = index;
        while(i+1<=nums.size()-1 && nums[i] == nums[i+1]) i++;
        last = i;
        result.push_back(first);
        result.push_back(last);
        return result;    
    }
};