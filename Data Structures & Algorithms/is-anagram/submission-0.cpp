class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(), s.end()) ; 
       sort(t.begin() , t.end()) ;
   int valid = s.compare(t) ; 

if (valid == 0 ) { 
    return true;
}
else {
   return false; 
}

    }
};
