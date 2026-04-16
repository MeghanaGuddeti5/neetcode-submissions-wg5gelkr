class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprofit=INT_MAX;
        for(int num: prices){
            minprofit=min(minprofit, num);
            maxprofit=max(maxprofit, num-minprofit);
        }
        return maxprofit;
        
    }
};
