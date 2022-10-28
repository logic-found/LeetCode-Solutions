class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>> mp;
        
        for(auto i:str){
          string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto [key,value]:mp){
            ans.push_back(value);
        }
        return ans;
    }
};