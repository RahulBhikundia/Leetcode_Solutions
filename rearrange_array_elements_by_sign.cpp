void swap(vector<int>& arr,int a,int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> sol(nums.size(),0);
        int pos=0,neg=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                sol[pos] = nums[i];
                pos += 2;
            }
            else
            {
                sol[neg] = nums[i];
                neg += 2;
            }
        }
        return sol;
    }
};