class Solution
{
public:
    bool sameFreq(string s)
    {
        // code here
        unordered_map<char, int> mp;

        for (int i = 0; i < s.length(); i++)
            mp[s[i]]++;

        map<int, int> mp_h;

        for (const auto &pair : mp)
            mp_h[pair.second]++;

        if (mp_h.size() > 2)
            return false;

        if (mp_h.size() == 1)
            return true;

        auto it = mp_h.begin();
        auto it2 = mp_h.begin();
        it2++;

        if (it->first == 1 && it->second == 1)
            return true;
        else if (it2->first - it->first == 1 && it2->second == 1)
            return true;
        return false;
    }
};
