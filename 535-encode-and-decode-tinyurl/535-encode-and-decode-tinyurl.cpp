class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string re;
        for(auto it:longUrl)
        {
            re.push_back(it+'a');
        }return re;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string re;
        for(auto it:shortUrl)
            re.push_back(it-'a');
        return re;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));