class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mymap;
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.find(nums[i]) == mymap.end())
                mymap[nums[i]] = 1;
            else
                mymap[nums[i]]++;
        }

        int result;
        for(const auto& pair : mymap)
        {
            if(pair.second == 1)
                result = pair.first;
        }
        return result;
    }
};