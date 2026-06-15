class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector <pair<int,int>> temp;
       for (int i=0;i<matrix.size();i++)
       {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                temp.push_back({i,j});
            }
        }
       } 
       for(int k=0;k<temp.size();k++)
       {
        int r=temp[k].first;
        int c=temp[k].second;
        for(int i=0;i<matrix[0].size();i++)
        {
            matrix[r][i]=0;
        }
         for(int i=0;i<matrix.size();i++)
        {
            matrix[i][c]=0;
        }
       }

       
       
    }
};