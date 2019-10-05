#include <bits/stdc++.h>
using namespace std;
struct zahyou {
    int x, y;
    zahyou(int a, int b) : x(a), y(b){}
};
int main(){
    int a, b;
    cin >> a >> b;
    zahyou xy = zahyou(a, b);
    cout << xy.x << " " << xy.y << endl;
    return 0;
}