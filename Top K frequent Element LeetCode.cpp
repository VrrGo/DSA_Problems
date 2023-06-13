class Solution {
public:

static bool cmp(pair<int,int>& a,pair<int,int>& b){
    return a.second < b.second ; 
    
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;

        for(auto i : nums){
            mp[i]++;
        }
 vector<pair<int, int>> pairVector(mp.begin(), mp.end());
make_heap(pairVector.begin(), pairVector.end(), cmp);

 vector<int> topKFrequent;
    for (int i = 0; i < k; ++i) {
        topKFrequent.push_back(pairVector[0].first);
        std::pop_heap(pairVector.begin(), pairVector.end(), cmp);
        pairVector.pop_back();
    }

    return topKFrequent;}
       
};
