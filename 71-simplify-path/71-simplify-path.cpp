class Solution {
public:
    string simplifyPath(string path) {
        vector<string>ans;
        string tmp="";
        for(int i=0;i<path.size();i++)
        {   
            while(i<path.size() and path[i]!='/')tmp.push_back(path[i++]);
            if(tmp=="." or tmp==""){tmp.clear();}
            else if(tmp=="..")
            {
                if(!ans.empty())
                ans.pop_back();
                tmp.clear();
            }
            else {ans.push_back(tmp);tmp.clear();}
        }
        string res;
        for(int i=0;i<ans.size();i++){
            res+='/';
            res+=ans[i];
            }
        if(!res.empty())
        return res;
        return "/";
    }
};
