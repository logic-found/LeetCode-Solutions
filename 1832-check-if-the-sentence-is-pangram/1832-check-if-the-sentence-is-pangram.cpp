class Solution {
public:
    bool checkIfPangram(string s) {
      unordered_map<char,int> mp;
        for(auto i:s){
            mp[i]=1;
        }
        if(mp.size()==26) return true;
        return false;
    }
};