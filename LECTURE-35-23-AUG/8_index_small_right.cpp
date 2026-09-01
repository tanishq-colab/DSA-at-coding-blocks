#include<iostream>
#include<stack>
#include<vector>

using namespace std;

vector<int> nsr(const vector<int>& a) {

	stack<int> stk; // monotonic stack // <index>

	int n = (int)a.size();
	vector<int> ans;

	// time : O(n)
	// space: O(n) due to monotonic stack

	for (int i = n-1; i>= 0 ; i--) {
		// find the index of nsl of A[i] using monotonic stack
		while (!stk.empty() and a[stk.top()] >= a[i]) {
			stk.pop();
		}
		if (stk.empty()) {
			// there is no smaller element to the left of A[i]
			ans.push_back(-1);
		} else {
			// whatever element is at the top of the stack is the index of nearest smaller element to the left of A[i]
			ans.push_back(stk.top());
		}
		stk.push(i);
	}

	return ans;

}

int main() {

	vector<int> A = {0, 3, 5, 4, 1, 6, 2};


	vector<int> ans = nsr(A);
	for (int i = 0; i < (int)ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;


	return 0;
}