class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         vector<int>ans;
         int i=0,j=0;
         map<int,vector<int>>v;
    for(i=0;i<mat.size();i++){
        for(j=0;j<mat[0].size();j++){
            v[i+j].push_back(mat[i][j]);
        }
    }
    bool b=false;
    for(auto it : v){
        vector<int>m=it.second;
    if(b){
        b=false;
    }
    else{
     
        reverse(m.begin(),m.end());
        b=true;
    }
    for(auto i:m){
        ans.push_back(i);
    }
    }
    return ans;
    }
};
