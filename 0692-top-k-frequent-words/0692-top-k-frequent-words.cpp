class Solution {
public:
    class comp{
        public:
        bool operator()(const pair<int,string>& i,const pair<int,string>& j){
            return i.first==j.first? i.second<j.second : i.first>j.first;}

    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(auto i:words){
            mp[i]++;
        }
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp> minh;
        for(auto [key,value]:mp){
            minh.push({value,key});
            if(minh.size()>k) minh.pop();
        }
        int size=minh.size();
        vector<string> ans(size);
        
        for(auto i=ans.rbegin();i!=ans.rend();++i){
            *i=minh.top().second;
            minh.pop();
        }
         return ans;  
        
    }
};