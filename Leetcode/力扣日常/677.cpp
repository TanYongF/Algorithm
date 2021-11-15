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

class MapSum {
public:

	unordered_map<string, int> mp;
	unordered_map<string,  int> st;
    MapSum() {
    }
    
    void insert(string key, int val) {
    	if(st.find(key) == st.end()){
    		for(int i = 1; i <= (int)key.length(); i++){
    			mp[key.substr(0, i)] += val;
    		}
    	}else{
    		int diff = val - st[key];
    		for(int i = 1; i <= (int)key.length(); i++){
    			mp[key.substr(0, i)] += diff;
    		}
    	}
    	st[key] = val;
    }
    
    int sum(string prefix) {
    	return mp[prefix];
    }
};

int main(int argc, char * argv[]){

	// Solution s = Solution();
	/* code */


    return 0;
}