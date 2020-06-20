#include <bits/stdc++.h>

using namespace std;

void decode() {
	int b, p, f, h, c;
	cin >> b >> p >> f >> h >> c;
	b /= 2;
	if(h < c) {
		swap(h, c);
		swap(p, f);
	}
	int res = 0;
	int cnt = min(b, p);
	b -= cnt, p -= cnt;
	res += h * cnt;
	cnt = min(b, f);
	b -= cnt, f -= cnt;
	res += c * cnt;
	cout << res << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
