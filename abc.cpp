//{ Driver Code Starts
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int a,x=0,y=0;
        if(nums.size()%2==1)
        {
            return false;
        }
        
        for(int i=0;i<nums.size();i++)
        {
        	for(int j=i+1;j<=nums.size();j++)
        	{
        		
        		if((nums[i]+nums[j])%k==0)
        		{
        			if(nums[i]==0 || nums[j]==0)
        			{
        				break;
					}
        			nums[i]=0;
        			nums[j]=0;
				}
			}
		}
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends
