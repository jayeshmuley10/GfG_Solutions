class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(int n, vector<string> &arr) {
	    sort(arr.begin(), arr.end(), [](string &x, string &y) {
	        return x + y > y + x;
	    });
	    
	    string ans = "";
	    
	    for(auto i : arr){
	        for(auto j : i) {
	            if(ans.size() == 0 and j == '0')
	                continue;
	               
	            ans += j;
	        }
	    }
	    
	    return ans;
	}
};
