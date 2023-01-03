

// } Driver Code Ends
class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(arr[i]);
        }
        sort(v.begin(),v.end());
    return v.at(0);
    }
};
