class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> result ; 

        for ( auto const& i : strs) { 
string stored = i; 
            sort(stored.begin() , stored.end()) ; 
            result[stored].push_back(i) ; 
        } 
vector<vector<string>> res ; 
for (auto const & it : result){
 res.push_back(it.second) ; 
}
  


return res; 
    }

};
