#include<limits>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        map<int,int>count;
        for(int i=0;i<n;i++)
        {
            if(count.find(nums[i]) == count.end())
                count[nums[i]] = 1;
            else
                count[nums[i]]++;
        }
        int result;
        for(map<int,int>::iterator it=count.begin();it!=count.end();it++)
        {
            if(it->second > (int)n/2){
                result = it->first;
                break;
            }
        }
        return result;
    }
};