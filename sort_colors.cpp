class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>count;
        for(int i=0;i<nums.size();i++)
        {
            if(count.find(nums[i]) == count.end())
                count[nums[i]] = 1;
            else
                count[nums[i]]++;
        }
        int index=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<count[i];j++)
            {
                nums[index] = i;
                index++;
            }
        }
    }
};