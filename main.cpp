#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;

	auto ca = int{ 0 };
	auto cb = int{ 0 };
	for (const auto& x : s) {
		if ('A' == x) {
			++ca;
		}
		else {
			++cb;
		}
	}

	cout << ca << " : " << cb;

	return 0;
}