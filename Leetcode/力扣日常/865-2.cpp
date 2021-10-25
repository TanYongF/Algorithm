#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <climits>
#include <vector>
#include <iostream>
#include <bitset>
#include <list>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define ms(s,val) memset(s, val, sizeof(s))
const int inf = INT_MAX;
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
	int getMaxDepth(TreeNode * root){
		if(not root) return 0;
		return max(getMaxDepth(root->left), getMaxDepth(root->right)) + 1;
	}
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
    	if(not root) return nullptr;
    	int leftMax = getMaxDepth(root->left), rightMax = getMaxDepth(root->right);
    	if(leftMax == rightMax) return root;
    	else if(leftMax > rightMax) return subtreeWithAllDeepest(root->left);
    	else return subtreeWithAllDeepest(root->right);  

    }
};

int main(int argc, char * argv[]){

	Solution s = Solution();
	/* code */


    return 0;
}