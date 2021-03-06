class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
         if(r*c!=mat.size()*mat[0].size())
            return mat;
         vector<vector<int>> res;
        int i,j,a=0,b=0;
        for(i=0;i<r;i++)
        {
            vector<int> q;
            for(j=0;j<c;j++)
            {
                if(b==mat[a].size())
                {
                    a++;
                    b=0;
                }
                q.push_back(mat[a][b]);
                b++;
            }
            res.push_back(q);
        }
        return res;
    }
};