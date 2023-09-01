class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finalR;
        vector<int> pascal = {1};
        finalR.push_back(pascal);
        while(pascal.size() != numRows)
        {
            auto it = pascal.begin();
            vector<int> result;
            result.push_back(1);
            while((it+1) != pascal.end())
            {
                result.push_back(*it + *(it+1));
                it++;
            }
            result.push_back(1);
            pascal = result;
            finalR.push_back(pascal);
        }
        return finalR;
    }
};