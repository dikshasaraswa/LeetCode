class Solution {
public:
    
    
    bool possible(vector<int>& bloomDay,int day, int m, int k){
        int n = bloomDay.size();
        int c=0;
        int nob=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day){
                c++;
            }
            else{
                nob += (c/k);
                c=0;
            }
        }
        nob+= c/k;
        if(nob >=m){return true;}
        else  {return false;}
    }
    
    
    int minDays(vector<int>& bloomDay, int m, int k) {
       long long val = m * 1ll * k * 1ll;
    int n = bloomDay.size(); //size of the array
    if (val > n) return -1; //impossible case.
    //find maximum and minimum:
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, bloomDay[i]);
        maxi = max(maxi, bloomDay[i]);
    }

    //apply binary search:
    long long low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(bloomDay, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}
};