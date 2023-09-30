// 				*** In the Name of Almighty Allah ***

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long>
#define ll long long
#define taratari_kam_kor ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define forAll(n) for(int i=0;i<n;i++)
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define endl "\n"
#define vpii vector<pair<int,int>>
#define pb push_back
#define mp make_pair
#define check_mate return 0;
#define letsGO int main()

ll mx = (1e9);

ll sumOfDig(ll n) {
    int sum = 0;
    while (n > 9) {
        sum += n % 10;
        n = n / 10;
    }
    return (sum + n);
}

bool isSorted(ll a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) return false;
    }
    return true;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPresent(ll x, vll &v, ll low, ll hi) {
    ll mid = (low + hi) >> 1;
    if (low > hi) return false;
    if (v[mid] == x) return true;
    else if (v[mid] > x) {
        return isPresent(x, v, low, mid - 1);
    }
    else return isPresent(x, v, mid + 1, hi);
}

letsGO{
    taratari_kam_kor

    // Your code goes here

    check_mate
}