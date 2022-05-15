class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string>ans;
        unordered_map<string,int>mp;
        for(auto s:cpdomains)
        {
            int i=0;
            string num;
            while(i<s.size())
            {
                if(s[i]==' ')
                    break;
                num.push_back(s[i]);
                i++;
            }
            int n=stoi(num);
            i++;
            mp[s.substr(i)]+=n;  
            while(i<s.size())
            {
                if(s[i]=='.')
                    break;
                i++;
            }
            mp[s.substr(i+1)]+=n;
            i++;
            while(i<s.size())
            {
                if(s[i]=='.'){
                    mp[s.substr(i+1)]+=n;
                    break;
                }
                i++;
            }
            
        }
        for(auto it:mp)
        {
            string tmp;
            tmp+=to_string(it.second)+" "+it.first;
            //cout<<tmp;
            ans.push_back(tmp);
        }
        return ans;
    }
};