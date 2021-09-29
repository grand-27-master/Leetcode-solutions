class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
      auto n = mat.size ();
        
        if (n == 1) 
        {
            return mat[0][0] == target[0][0];
        }
        
        std::string targ = "";
        std::string rows = "";
        std::string cols = "";
        
        for (auto i = 0; i < n; ++ i)
        {
            for (auto j = 0; j < n; ++ j)
            {
                targ += target [i][j] + '0';
                rows += mat [i][j] + '0';
            }
            

            for (int j = n - 1; j >= 0; -- j)
            {
                cols += mat [j][i] + '0';
            }

        }

        
        if (targ == rows || targ == cols) return true;
        
        std::reverse (rows.begin (), rows.end ());
        if (targ == rows) return true;
        
        std::reverse (cols.begin (), cols.end ());
        if (targ == cols) return true;
        
        return false;
        
    }
};