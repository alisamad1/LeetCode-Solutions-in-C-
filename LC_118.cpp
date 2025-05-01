vector<vector<int>> generate(int numRows) {
    vector<vector<int>>ans;
    vector<int> curr, prev;
    for(int i = 1; i<=numRows; i++){
        for(int j = 1; j<=i; j++){
            if(j == 1 || j == i){
                curr.push_back(1);
            }
            else{
                curr.push_back(prev[j-1] + prev[j-2]);
            }
        }
        ans.push_back(curr);
        prev = curr;
        curr.clear();
    }
    return ans;
}