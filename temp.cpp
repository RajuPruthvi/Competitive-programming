#include<bits/stdc++.h>
using namespace std;

// macros
#define int long long 
#define TIME clock() * 1.0 / CLOCKS_PER_SEC
#define all(c) c.begin(), c.end()
#define PB push_back
#define MP make_pair
#define bitcount __builtin_popcount
#define watch(x) cerr<< (#x) << " is " << (x) <<"\n";
#define sz(x) ((int)((x).size()))
#define UNIQUE(c) (c).resize(unique(all(c)) - (c).begin())
#define pii2ll(p) ((ll)(p).first<<32 | (p).second)

// type definitions
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int, int> pii;
typedef long double ld;

// template functions
template < typename A, typename B >
ostream &operator << ( ostream& os, const pair< A, B > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "[";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "{";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}
template < typename A, typename B >
ostream &operator << ( ostream & os, const map< A, B > &v ) {
    os << "[";
    typename map< A, B >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " -> " << it -> second ;
    }
    return os << "]";
}
template <typename T1, typename T2>
inline auto mini(T1 a, T2 b) { return (a < b ? a : b); }
template<typename T, typename... Args>
inline auto mini(T a, Args... args) { return mini(a, mini(args...)); }
template <typename T1, typename T2>
inline auto maxi(T1 a, T2 b) { return (a > b ? a : b); }
template<typename T, typename... Args>
inline auto maxi(T a, Args... args) { return maxi(a, maxi(args...)); }
template<typename T>
T gcd(T a, T b) { if(a==0 or b==0) return a+b; return gcd(b, a%b) ; }
template<typename T>
T lcm(T a, T b) { if(a==0 or b==0) return 0; return a/gcd(a, b)*b; }

// random number generation
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); // use mt19937_64 for 64 bit

// constants
const long double eps = LDBL_EPSILON;
const int inf = 1e15;
const int modn = 1e9+7;
const int maxn = 2e5+3;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Your code here
    
    return 0;
}

