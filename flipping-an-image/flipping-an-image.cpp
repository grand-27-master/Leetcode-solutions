class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        //vector<vector<int>>flip;
        int n=image.size();
        
        for(int i=0;i<n;i++)
        {
//             image[i]=image[i+2];
//             if(image[i]==0)
//                 image[i]=1;
//             if(image[i]==1)
//                 image[i]=0;
            
//             flip.push_back(image[i]);
            
            for(int j = 0; j < n/2; j++){
                int temp = image[i][j];
                image[i][j] = image[i][n-1-j];
                image[i][n-1-j] = temp;
            }
            for(int j = 0; j < n; j++){
                if(image[i][j] == 0)
                    image[i][j] = 1;
                else
                    image[i][j] = 0;
            }
        
        }
        return image;
    }
};