#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main() {
    fastio;
    string str; cin >> str;
    int idx; cin >> idx;
    cout << str[idx - 1] << '\n';

    return 0;
}