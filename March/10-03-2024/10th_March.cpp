class Solution{ 
public: 
    std::string removeDuplicates(std::string str) { 
        std::unordered_set<char> seen; 
        std::string result; 
         
        for (char ch : str) { 
            if (seen.find(ch) == seen.end()) { 
                result += ch; 
                seen.insert(ch); 
            } 
        } 
         
        return result; 
    } 
};
