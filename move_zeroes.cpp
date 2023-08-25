class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int numz = 0;
        int n = nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
                numz++;
            else
                arr.push_back(nums[i]);
        }
        int i;
        for(i=0;i<arr.size();i++)
        {
            nums[i] = arr[i];
        }
        for(int j=0;j<numz;j++)
        {
            nums[i+j] = 0;
        }

    }
};