class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>split;
        string fil="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                fil+=s[i];
            else 
            {
                split.push_back(fil);
                fil="";
            }
        }
        split.push_back(fil);
        int n=pattern.size();
        if(split.size()!=n)return false;
        unordered_map<char,string>mp;
        unordered_set<string>mp2;
        for(int i=0;i<n;i++)
        {
            if(mp.find(pattern[i])==mp.end())
            {
                if(mp2.find(split[i])!=mp2.end())
                   return false;
               mp[pattern[i]]=split[i];
                mp2.insert(split[i]);
            }
             else 
            {  
                if(mp[pattern[i]]!=split[i])
                    return false;
            }
        }
        return true;
    }
};
/*class Solution {
public:
	bool wordPattern(string pattern, string s) {
		vector<string> v;
		int i = 0;
		string temp = "";
		while(i < s.size()){
			if(s[i] == ' '){
				v.push_back(temp);
				temp = "";
			}
			else{
				temp += s[i];
			}
			i++;
		}
		v.push_back(temp);

		if(v.size() != pattern.size()){
			return false;
		}
		unordered_map<char, string> m;
		set<string> st;
		for(int i = 0; i < pattern.size(); i++){
			if(m.find(pattern[i]) != m.end()){
				if(m[pattern[i]] != v[i]){
					return false;
				}
			}
			else{
				if(st.count(v[i]) > 0){
					return false;
				}
				m[pattern[i]] = v[i];
				st.insert(v[i]);
			}
		}
		return true;
	}
};*/