#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int n;
vii cla;
priority_queue<int, vi, greater<int>> q;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	cla = vii(n);
	for (auto& [x, y] : cla) {
		cin >> x >> y;
	}

	sort(cla.begin(), cla.end());

	for (const auto& [x, y] : cla) {
		if (q.empty()) {
			q.push(y);
			continue;
		}

		const auto& t = q.top();
		if (t <= x) {
			q.pop();
		}
		q.push(y);
	}

	cout << q.size();

	return 0;
}