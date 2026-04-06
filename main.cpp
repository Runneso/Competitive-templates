#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops")

#define ll long long int
#define ld long double
#define cd complex<ld>

template<class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<class T>
struct ordered_multiset {
    ordered_set<pair<T,ll> > t;
    ll timer = 0;

    void insert(const T &x) {
        t.insert({x, timer++});
    }

    void extract(const T &x) {
        auto it = t.lower_bound({x, -1});
        if (it != t.end() && it->first == x) {
            t.erase(it);
        }
    }

    ll count_less(const T &x) const {
        return t.order_of_key({x, -1});
    }

    ll count_less_or_equal(const T &x) const {
        return t.order_of_key({x, LLONG_MAX});
    }

    T kth(ll k) const {
        return t.find_by_order(k)->first;
    }

    ll size() const {
        return (ll) t.size();
    }

    bool empty() const {
        return t.empty();
    }
};

const ld PI = acos(-1);
const ll MOD = 1'000'000'007LL;
const ll MOD_ = 1'000'000'009LL;
const ll BASE = 911382323LL;
const ll BASE_ = 972663749LL;
const ld EPS = 1e-9;

#define all(x) (x).begin(), (x).end()
#define print(x, a) for (auto element : x) cout << element + a << " ";
#define endl "\n"

#define I_AM_OUTSIDER = true;
#define RAMAZAN_RAKHMATULLIN_FAN_CLUB = true;

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif

template<class T>
vector<T> compress(vector<T> v) {
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    return v;
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll randint(const ll l, const ll r) {
    return rng() % (r - l + 1) + l;
};

ll binpow(const ll a, const ll p, const ll m) {
    if (p == 0) {
        return 1;
    }
    if (p & 1) {
        return (binpow(a, p - 1, m) * a) % m;
    }
    const ll res = binpow(a, p / 2, m);
    return (res * res) % m;
}


void solution() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    // cin >> t;
    while (t--) {
        solution();
    }
}
