class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> myset;
        for(int i=0;i<nums.size();i++)
        {
            myset.insert(nums[i]);
        }
        int cur=1,maxs;
        if(myset.empty())
            maxs = 0;
        else
            maxs = 1;
        for(auto it=myset.begin();it!=myset.end();it++)
        {
            if(myset.find(*it-1)==myset.end())
            {
                int j=1;
                cur=1;
                while(myset.find(*it+j)!=myset.end())
                {
                    j++;
                    cur++;
                    maxs = max(maxs,cur);
                }
            }
        }
        return maxs;
    }
};