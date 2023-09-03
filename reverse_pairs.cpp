class Solution {
public:
    int count = 0;
    void merge(vector<int>& arr, int first, int mid, int last)
    {
        vector<int> M, N;
        int m = mid - first + 1, n = last-mid;  
        for(int i=0;i<m;i++)
        {
            M.push_back(arr[first+i]);
        }
        for(int i=0;i<n;i++)
        {
            N.push_back(arr[mid+i+1]);
        }
        int i=0,j=0,k=first;
        while(i<m && j<n)
        {
            if(M[i] < N[j])
            {
                arr[k] = M[i];
                i++;
            }
            else
            {
                arr[k] = N[j];
                j++;
            }
            k++;
        }
        while(i<m)
        {
            arr[k] = M[i];
            i++;
            k++;
        }
        while(j<n)
        {
            arr[k] = N[j];
            j++;
            k++;
        }
    }
    void countReverse(vector<int>& arr,int first, int mid, int last)
    {
        int j=mid+1;
        for(int i=first;i<=mid;i++)
        {
            while(j<=last && arr[i]>((long long)2*arr[j]))
                j++;
            count += (j-(mid+1));
        }
    }
    void mergeSort(vector<int>& arr,int first, int last)
    {
        if(first >= last) return;
        int mid = (first + last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        countReverse(arr, first, mid, last);
        merge(arr,first,mid,last);
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return count;      
    }
};