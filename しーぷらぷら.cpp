#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll a, b;
    cin >> a >> b;
    a /= b;
    cout << a << endl;
    ll c;
    cin >> c;
    cout << c % a << endl;
    return 0;
}