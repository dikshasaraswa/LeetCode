class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int> ans;
        int t=0, b=n-1, l=0, r=m-1;
        while(t<=b && l<=r){
            for(int i=l;i<=r;i++)        //first row
                ans.push_back(mat[t][i]);
                t++;
            
            for(int i=t;i<=b;i++)          //last column
                ans.push_back(mat[i][r]);
                r--;
            
            if(t<=b){
            for(int i=r;i>=l;i--)        //last row
                ans.push_back(mat[b][i]);
                b--;
            }
            if(l<=r){
            for(int i=b;i>=t;i--)         //first column 
                ans.push_back(mat[i][l]);
                l++;
            }
        }
        return ans;
        
    }
};