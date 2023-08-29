class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mp;
        mp[0]=1;
        int pres = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++) 
        {
            pres += nums[i];
            int rems =  pres - k;
            if(mp.find(rems)!=mp.end())
                count += mp[rems];
            if(mp.find(pres)==mp.end())
                mp[pres] = 1;
            else
                mp[pres]++;
        }
        return count;
    }
};