#include "bits/stdc++.h"
using namespace std;
// #include "ext/pb_ds/assoc_container.hpp"
// #include "ext/pb_ds/tree_policy.hpp"
// using namespace __gnu_pbds;

#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long  ll;
// template<typename T = ll>
// using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define vi         vector<ll>
#define vb         vector<bool>
#define vvi        vector<vector<ll>>
#define pi         pair<ll,ll>
#define vpi        vector<pi>
#define mii        map<ll,ll>
#define qi         queue<ll>
#define si         stack<ll>
#define pqd        priority_queue<ll>
#define pqa        priority_queue<ll, vi, greater<ll>()>
#define ff         first
#define ss         second
#define pb         push_back
#define ins        insert
#define pob        pop_back
#define puf        push_front
#define pof        pop_front
#define sz         size
#define mp         make_pair
#define all(x)     x.begin(), x.end()
#define bs(a,x)    binary_search(all(a), x)
#define lb(a,x)    lower_bound(all(a), x)
#define lbi(a,x)   lb(a,x) - a.begin()
#define ub(a,x)    upper_bound(all(a), x)
#define ubi(a,x)   ub(a,x) - a.begin()

#define sortasc(x) sort(all(x))
#define sortdes(x) sortasc(x);reverse(all(x))

#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define leadingzrs(x)    __builtin_clzll(x)
#define trailingzrs(x)   __builtin_ctzll(x)
#define parity(x)        __builtin_parityll(x)

const ll M = 1e9+7;

ll mos() { return 0LL; }
template<typename T, typename... Args>
T mos(T a, Args... args) { return ((a + mos(args...))%M + M)%M; }

long long mop() { return 1LL; }
template<typename T, typename... Args>
T mop(T a, Args... args) { return (a*mop(args...))%M; }

#define pow2(x)    (1ll<<(x))
#define PINF       LLONG_MAX
#define NINF       LLONG_MIN

#define nline         "\n"
#define precision(x)  fixed << setprecision(x)
#define print(a)   for (auto &i : a) cout << i << " "; cout << nline
#define yesno(x)   cout << (((x)) ? "YES" : "NO") << nline
#define cntdig(x)  floor(log(x) + 1)

#define fra(i,init,n,inc) for((i)=(init);(i)<(n);(i)+=(inc))
#define frd(i,init,n,dec) for((i)=(init);(i)>=(n);(i)-=(dec))

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

/*  Graph Algos */

int dx[8] = {-1, 0, 1, 0, -1, 1, 1, -1}; // T R B L TR RB BL LT
int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1}; // T R B L TR RB BL LT

/*  Graph Algos */

#define ts to_string
string ts(char c) { return string(1, c); }
string ts(bool b) { return b ? "true" : "false"; }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
template<class A> string ts(complex<A> c) { stringstream ss; ss << c; return ss.str(); }
string ts(vector<bool> v) { string res = "{"; for(int i = 0; i < v.sz(); ++i) res += char('0' + v[i]); res += "}"; return res; }
template<size_t SZ> string ts(bitset<SZ> b) { string res = ""; for(int i = 0; i < SZ; ++i) res += char('0' + b[i]); return res; }
template<class A, class B> string ts(pair<A,B> p);
template<class T> string ts(T v) { bool fst = 1; string res = "{"; for (const auto& x: v) { if (!fst) res += ", "; fst = 0; res += ts(x); } res += "}"; return res; }
template<class A, class B> string ts(pair<A,B> p) { return "(" + ts(p.ff) + ", " + ts(p.ss) + ")"; }

void DBG() { cerr << "]" << nline; }
template<class H, class... T> void DBG(H h, T... t) { cerr << ts(h); if (sizeof...(t)) cerr << ", "; DBG(t...); }
void EDBG(string names) { names = names; }
template<class H, class... T> void EDBG(string names, H h, T... t) { auto pos = names.find(','); auto first_name = names.substr(0, pos); auto rest = names.substr(pos + 1); while(rest.front() == ' ') { rest = rest.substr(1); } cerr << "[" << first_name << "] : [" << ts(h) << "]" << nline; EDBG(rest, t...); }

#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] : [", DBG(__VA_ARGS__)
#define edbg(...) EDBG(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...) 0
#define edbg(...) 0
#endif

template<typename T=ll>
bool sortbysec(T &a, T &b) { return a.ss < b.ss; }

ll gcd(ll n1, ll n2) { if (n2 > 0) return gcd(n2, n1%n2); else return n1; }

pair<vi,bool*> seive(ll n) { vi primes; bool *isprime = new bool[n+1]; isprime[0] = isprime[1] = true; for(ll i=2;i*i<=n;i++) if(!isprime[i]) for(ll j=i*i;j<=n;j+=i) isprime[j] = true; for(ll i=2;i<=n;i++) { if(!isprime[i]) primes.pb(i); } pair<vi,bool*> ans = {primes, isprime}; return ans; }

template<typename T = ll>
void tv(vector<T> &a, ll n) { ll i = 0; fra(i,0,n,1) { T t; cin >> t; a.pb(t); } }

void printmat(vvi &a) {
    ll i,j;
    fra(i,0,a.sz(),1) {
        fra(j,0,a[0].sz(),1)
            cout << a[i][j] << " ";
        cout << nline;
    }
}

vvi matrix_mul(vvi &a,vvi &b) {
    ll i,j,k;
    vvi ans(a.sz(), vi(b[0].sz(), 0));

    fra(i,0,a.sz(),1)
        fra(j,0,a[0].sz(),1)
            fra(k,0,b[0].sz(),1)
                ans[i][k] += (a[i][j] * b[j][k]);

    return ans;
}

vvi matrix_expo(vvi &a, ll n) {
    if(n==1) return a;
    vvi tempby2 = matrix_expo(a,n/2);
    vvi temp = matrix_mul(tempby2, tempby2);
    if(n%2) return matrix_mul(a, temp);
    else return temp;
}

ll binexpo(ll n, ll pow, ll mod) {
    ll ans = 1;
    while(pow) {
        if(pow%2) ans = (ans * n) % mod;
        n = (n * n) % mod;
        pow/=2;
    }
    return ans;
}

// ll LIS(ll ind, ll prev, ll n, vi &a, map<pair<ll,ll>, ll> &dp) {
//     if(ind==n) return 0;
//     if(dp[{ind, prev+1}]) return dp[{ind, prev+1}];
//     ll curans = -1;
//     if(a[ind] > prev) {
//         curans = max(curans, 1 + LIS(ind+1, a[ind], n, a, dp));
//     }
//     curans = max(curans, LIS(ind+1, prev, n, a, dp));
//     return dp[{ind,prev+1}] = curans;
// }

// ll helper(ll ind, ll cur, ll k, ll n, vi &a, vvi &dp) {
//     if(ind == n) {
//         if(cur1 >= k && cur2 >= k) return 0;
//         else return INT_MAX;
//     }
//     if(dp[ind]) return dp[ind];
//     ll ans = PINF;
//     if(cur1 < k) {
//         ans = min(ans, 1 + helper(ind+1, cur1+a[ind], cur2, k, n, a, dp));
//     }
//     if(cur2 < k) {
//         ans = min(ans, 1 + helper(ind+1, cur1, cur2+a[ind], k, n, a, dp));
//     }
//     ans = min(ans, helper(ind+1, cur1, cur2, k, n, a, dp));
//     return dp[{ind, cur1, cur2}] = ans;
// }

ll maxcost(ll x, ll y, ll n, ll m, vvi &a, vvi &dp) {
    if(y < 0 || y==m) return (int)(-1e8);
    if(x==n) return 0;
    if(dp[x][y] != -1) return dp[x][y];
    ll ans = INT_MIN;
    ans = max(ans, maxcost(x+1, y, n, m, a, dp));
    ans = max(ans, maxcost(x+1, y+1, n, m, a, dp));
    ans = max(ans, maxcost(x+1, y-1, n, m, a, dp));
    return dp[x][y] = a[x][y] + ans;
}

vi convertintovec(ll n) {
    vi ans;
    while(n) {
        ans.pb(n%10);
        n/=10;
    }
    sortasc(ans);
    auto it = unique(all(ans));
    ans.resize(distance(ans.begin(), it));
    sortdes(ans);
    return ans;
}

ll mincost(ll n, vi &dp) {
    if(n==0) return 0ll;
    if(dp[n] != -1) return dp[n];
    vi a = convertintovec(n);
    // dbg(n, a);
    ll ans = PINF, i=0;
    fra(i,0,a.sz(),1) {
        if(a[i] && n - a[i] >= 0) ans = min(ans, 1 + mincost(n-a[i], dp));
    }
    return dp[n] = ans;
}

ll editdist(ll ind1, ll ind2, string &s1, string &s2, vvi &dp) {
    if(ind1 == s1.sz()) return s2.sz() - ind2;
    if(ind2 == s2.sz()) return s1.sz() - ind1;

    if(dp[ind1][ind2] != -1) return dp[ind1][ind2];
    ll ans = INT_MAX;
    if(s1[ind1] == s2[ind2]) {
        ans = min(ans, editdist(ind1+1, ind2+1, s1, s2, dp));
        return dp[ind1][ind2] = ans;
    }
    // insert
    ans = min(ans, editdist(ind1, ind2+1, s1, s2, dp));
    // remove
    ans = min(ans, editdist(ind1+1, ind2, s1, s2, dp));
    // replace
    ans = min(ans, editdist(ind1+1, ind2+1, s1, s2, dp));
    return dp[ind1][ind2] = 1 + ans;
}

ll longestincreasingsub(ll n, vi &a) {
    ll maxn = (ll)(1e9) + 10;
    vi dp(n+1, maxn);
    dp[0] *= -1;
    ll ans=0, i=0;
    fra(i,0,n,1) {
        ll j = ubi(dp, a[i]);
        if(dp[j-1] < a[i] && a[i] < dp[j]) {
            dp[j] = a[i];
        }
    }
    fra(i,0,n+1,1) {
        if(dp[i] < maxn) ans = i;
    }
    return ans;
}

// vvi a;

// ll helper(ll ind, ll cur, ll &n, ll &k) {
//     if(ind == n) return (cur == k);
//     ll ans = 0;
//     fra(i,0,a[ind].sz(),1) {
//         if(k % a[ind][i] == 0) {
//             ans += helper(ind+1, cur * a[ind][i], n, k);
//         }
//     }
//     return ans;
// }

// int helper(ll totalop, ll n, ll k, vi &pref) {
//     ll i=0;
//     frd(i,n-1,1,1) {
//         ll totaltype1op = totalop - (n-i);
//         if(totaltype1op < 0) break;
//         ll effectiveminval = pref[0] - totaltype1op;
//         if(pref[i-1] - pref[0] + (effectiveminval * (n-i+1)) <= k) return 1;
//     }
//     if(pref[n-1] - totalop <= k) return 1;
//     return 0;
// }

ll helper(ll ind, vi &cur, ll n) {
    if(ind==n) {
        ll ans = 0, i=0;
        fra(i,1,cur.sz()-1,1) {
            if(cur[i-1] < cur[i] && cur[i+1] < cur[i]) ans++;
        }
        fra(i,1,cur.sz()-1,1) {
            if(cur[i-1] > cur[i] && cur[i+1] > cur[i]) ans++;
        }
        return ans;
    }

    ll ans = 0;
    cur.pb(0);
    ans += helper(ind+1, cur, n);
    cur.pop_back();

    cur.pb(1);
    ans += helper(ind+1, cur, n);
    cur.pop_back();

    cur.pb(2);
    ans += helper(ind+1, cur, n);
    cur.pop_back();

    return ans;
}

vi divisors(ll n) {
    vi ans;
    for(ll i=1;(i*i) <= n;i++) {
        if(n % i == 0) {
            ans.pb(i);
            ll j = n/i;
            if(j!=i) ans.pb(j);
        }
    }
    return ans;
}

bool possible(ll k, ll s, vi &a) {
    ll i=0, sum = 0;
    fra(i,0,a.sz(),1) sum += a[i] / k;
    if(sum <= s) return true;
    return false;
}

ll floorsq(ll n) {
    ll l = 1;
    ll h = n;
    ll ans;
    while(l <= h) {
        ll mid = (l + h)/2;
        if(mid*mid <= n) {
            ans = mid;
            l=mid+1;
        }
        else {
            h = mid-1;
        }
    }
    return ans;
}

ll aggcow(ll n, ll k, vi &a) {
    ll l = 1, h = a[n-1] - a[0], i=0;
    ll ans = 0, cnt=0;
    while(l <= h) {
        cnt = 1;
        ll mid = (l + h) /2;
        fra(i,0,n,1) {
            if(cnt == k) break;
            ll j = i+1;
            while(j < n && a[j] - a[i] < mid) j++;
            if(j == n) break;
            cnt++;
            i=j-1;
        }
        // dbg(mid, cnt);
        if(cnt == k) {
            // cout << "Possible for " << mid << nline;
            ans = max(ans, mid);
            l=mid+1;
        } else {
            h=mid-1;
        }
    }
    return ans;
}

long long minTime(int a[], int n, int k) {
    long long ans = LLONG_MAX;
    long long l = 1, h = (long long)(1e10);
    while(l <= h) {
        long long mid = (l + h) / 2;
        long long cnt = 1;
        long long sum = a[0];
        long long curmax = 0;
        for(int i=1;i<n;i++) {
            if(sum + a[i] > mid) {
                curmax = max(curmax, sum);
                sum = a[i];
                cnt++;
            } else {
                sum += a[i];
            }
        }
        curmax = max(curmax, sum);
        if(cnt <= k) {
            ans = min(ans, curmax);
            h = mid-1;
        } else
            l = mid+1;
    }
    return ans;
}

long long helper(ll n, ll k, vi a) {
    if(k > n) return -1;
    long long l = 1, h = (long long)(1e11);
    long long ans = h, curmax = 0, sum = 0, cnt=0;
    while(l <= h) {
        long long mid = (l + h)/2;
        sum = 0;
        curmax = 0;
        cnt=1;
        for(int i=0; i<n; i++) {
            if(sum + a[i] > mid) {
                curmax = max(curmax, sum);
                sum = a[i];
                cnt++;
            } else
                sum += a[i];
        }
        curmax = max(curmax, sum);
        if(cnt <= k) {
            ans = min(ans, curmax);
            h = mid-1;
        } else {
            l = mid+1;
        }
    }
    return ans;
}

vi factors(ll n) {
    vi ans;
    for(ll i=2;i*i<=n;i++) {
        if(n%i==0) {
            ans.pb(i);
            ll j = n/i;
            if(j != i) {
                ans.pb(j);
            }
        }
    }
    sortasc(ans);
    reverse(all(ans));
    return ans;
}

void my_sol() {
    ll n, m, k, i = 0, j = 0, cnt = 0, sum = 0, maxi = NINF, mini = PINF;
    string s,s1,s2;
    cin >> n;
    vi a;
    tv(a, n);
    sortasc(a);
    int taken[n+1] = {0};
    vi fr(n);
    fra(i,0,n,1) {
        if(a[i] >= 1 && a[i] <= n && !taken[a[i]]) {
            taken[a[i]] = 1;
            fr[i] = 1;
        }
    }

    frd(i,n-1,0,1) {
        if(!fr[i]) {
            while(a[i] > n) {
                a[i] /= 2;
            }
            while(a[i] && taken[a[i]]) {
                a[i] /= 2;
            }
            if(a[i]) {
                taken[a[i]]=1;
                fr[i] = 1;
            }
        }
    }

    fra(i,1,n+1,1) {
        if(!taken[i]) {
            yesno(0);
            return;
        }
    }
    yesno(1);

    // cin >> n >> k;
    // vi a;
    // tv(a, n);
    // // sort(all(a));
    // // cout << aggcow(n, k, a) << nline;
    // // cout << minTime(a, n, k) << nline;
    // cout << helper(n, k, a) << nline;
    // cin >> n;
    // cout << floorsq(n) << nline;

    // cin >> n >> k;
    // vi a;
    // tv(a, n);
    // sort(all(a));
    // ll l = 1;
    // ll h = a[n-1] + 1;
    // ll ans = 0;
    // while(l <= h) {
    //     ll mid = (l + h)/2;
    //     if(possible(mid, k, a)) {
    //         ans = mid;
    //         h = mid-1;
    //     } else {
    //         l = mid+1;
    //     }
    // }
    // cout << ans << nline;

    // dbg(possible(5, ))
    // 1341B
    // cin >> n >> k;
    // vi a;
    // tv(a, n);
    // vi pref(n);
    // pref[0] = 0;
    // pref[n-1] = 0;
    // fra(i,1,n-1,1) {
    //     if(a[i-1] < a[i] && a[i+1] < a[i]) pref[i] = 1;
    // }
    // fra(i,1,n,1) pref[i] += pref[i-1];
    // maxi = pref[k-2];
    // j = 0;
    // fra(i,1,n-k+1,1) {
    //     ll cur = pref[i+k-2] - pref[i-1];
    //     if(cur > maxi) {
    //         j = i;
    //         maxi = cur;
    //     }
    // }
    // cout << (maxi+1) << " " << (j+1) << nline;
    // ll u;
    // cin >> n >> m;
    // vvi arr(n, vi(m));
    // vvi pref(n+1, vi(m+1));

    // fra(i,0,n,1) {
    //     fra(j,0,m,1) {
    //         char cur;
    //         cin >> cur;
    //         arr[i][j] = cur - '0';
    //     }
    // }

    // cin >> u;
    // k=1;
    // while(u--) {
    //     ll a, b, c, d;
    //     cin >> a >> b >> c >> d;
    //     a--; b--; c--; d--;
    //     // Increase cell (a, b) by k (Start of the range)
    //     // Decrease cell (a, d+1) by k (Next Column out of the range)
    //     // Decrease cell (c+1, b) by k (Next Row out of the range)
    //     // Increase cell (c+1, d+1) by k (Add in the cell which is being substracted twice)
    //     pref[a][b] += k;
    //     pref[c+1][b] -= k;
    //     pref[a][d+1] -= k;
    //     pref[c+1][d+1] += k;
    // }

    // // Calculate total difference in all the cells
    // fra(i,0,n+1,1) {
    //     fra(j,0,m+1,1) {
    //         if(i-1 >= 0) pref[i][j] += pref[i-1][j];
    //         if(j-1 >= 0) pref[i][j] += pref[i][j-1];
    //         if(i-1 >= 0 && j-1 >= 0) pref[i][j] -= pref[i-1][j-1];
    //     }
    // }

    // // Add old array values to get updated values
    // fra(i,0,n,1) {
    //     fra(j,0,m,1) {
    //         if(pref[i][j]%2) arr[i][j] = (1 - arr[i][j]);
    //     }
    // }

    // fra(i,0,n,1) {
    //     fra(j,0,m,1) cout << arr[i][j];
    //     cout << nline;
    // }

    // // Perform Prefix Sum to speed up queries (Normal Prefix Sum on 2D-Array)
    // fra(i,0,n+1,1) {
    //     fra(j,0,m+1,1) {
    //         if(i-1 >= 0) pref[i][j] += pref[i-1][j];
    //         if(j-1 >= 0) pref[i][j] += pref[i][j-1];
    //         if(i-1 >= 0 && j-1 >= 0) pref[i][j] -= pref[i-1][j-1];
    //     }
    // }

    // // fra(i,0,n+1,1) {
    // //     fra(j,0,m+1,1) {
    // //         if(i-1 >= 0) pref[i][j] += pref[i-1][j];
    // //         if(j-1 >= 0) pref[i][j] += pref[i][j-1];
    // //         if(i-1 >= 0 && j-1 >= 0) pref[i][j] -= pref[i-1][j-1];
    // //     }
    // // }

    // while(k--) {
    //     ll a, b, c, d;
    //     cin >> a >> b >> c >> d;
    //     ll ans = pref[c][d];
    //     if(a-1 >= 0) ans -= pref[a-1][d];
    //     if(b-1 >= 0) ans -= pref[c][b-1];
    //     if(a-1 >= 0 && b-1 >= 0) ans += pref[a-1][b-1];
    //     cout << ans << nline;
    // }

    // while(cnt < k) {
    //     s1.pb(s[i]);
    //     cnt++;
    // }
    // fra(i,0,n,1) {
    //     while(cnt < k) {
    //         cnt++;

    //         continue;
    //     }
    // }

    // dbg(s, s1);
    // s = s1;
    // reverse(all(s));
    // cout << s1 << s << nline;
    // if(ans.sz()==0) {
    //     ans = s.substr(0, n);
    // }

    // s1 = ans;
    // reverse(all(s1));

    // cout << ans << s1 << nline;

    // cin >> n;
    // vi a;
    // tv(a, n);

    // fra(i,2,n,1) {
    //     k = a[i];
    //     if(k >=3) {
    //         ll total = k - (k % 3);
    //         ll firstpart = k/3;
    //         ll secondpart = total - firstpart;
    //         // dbg(i, total, firstpart, secondpart);
    //         a[i-1] += firstpart;
    //         a[i-2] += secondpart;
    //     }
    // }
    // // dbg(a);
    // cout << *min_element(all(a)) << nline;
}

int main() {
    fast_io;
    //#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        auto start = std::chrono::high_resolution_clock::now();


    ll t = 1;
    cin >> t;
    while(t--)
        my_sol();


        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        long double t1 = (long double)duration.count()/1000000;
        cout << "\n\nTime taken "<< fixed << setprecision(6) << t1 << " seconds" << "\n";

    return 0;
}

