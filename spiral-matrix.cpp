class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;
        vector<int> row,col;
        for(int i=0;i<m;i++)
            row.push_back(i);
        for(int j=0;j<n;j++)
            col.push_back(j);
        int sr=0, sc=0, lr=m-1, lc=n-1;
        while((sr<=lr && sc<=lc))
        {
            for(int i=sc;i<=lc;i++)
            {
                result.push_back(matrix[sr][i]);
            }
            sr++;
            for(int i=sr;i<=lr;i++)
            {
                result.push_back(matrix[i][lc]);
            }
            lc--;
            if(sr<=lr)
            {
                for(int i=lc;i>=sc;i--)
                {
                    result.push_back(matrix[lr][i]);
                }
                lr--;
            }
            if(sc<=lc)
            {
                for(int i=lr;i>=sr;i--)
                {
                    result.push_back(matrix[i][sc]);
                }
                sc++;
            }
        }
        return result;
    }
};