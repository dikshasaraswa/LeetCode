class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int msf=prices[0];
        int maxi=0;
        int masf=0;
        for(int i=1;i<n;i++){
            msf=min(msf,prices[i]);
            maxi=prices[i]-msf;
            masf=max(masf,maxi);
        }
        return masf;
    }
};