class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int n = v.size();
        vector<int> ls;
        for(int i=0;i<n;i++){
            int c=0;
            if(ls.size()==0 || ls[0]!=v[i]){
                for(int j=0;j<n;j++){
                    if(v[j]==v[i])
                        c++;
                }
                if(c > (n/3))
                     ls.push_back(v[i]);
                }
            if(ls.size()==2) break;
        }
        return ls;
    }
};