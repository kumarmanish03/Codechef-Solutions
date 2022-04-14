/*
* 
* @author: Manish Kumar
* @institute: IIIT Allahabad, INDIA
*
* @problem: https://www.codechef.com/problems/GDPERM
* @logic: observation
*
*/

#include<bits/stdc++.h>
using namespace std;

template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args)
{   cout << t << " ", print(forward<Args>(args)...); }
#define _print(v) for(auto i:(v)) cout<<i<<" "; cout<<"\n";
#define fs      first
#define sc     second
#define pb  push_back
#define int long long

int solve(){
    int n;
    cin >> n;

    if(n == 1 || n == 3){
        print(-1);
    }
    else if(n == 2){
        print(2, 1);
    }
    else {
        if(n&1){
            vector<int> res = {2, 5, 1, 3, 4};
            for(int i = 5; i < n; i+=2){
                res.push_back(i+2);
                res.push_back(i+1);
            }
            _print(res);
        }
        else{
            vector<int> res;
            for(int i = 1; i <= n; i++)
                res.push_back(i);
            for(int i = 0; i < n; i+=2)
                swap(res[i], res[i+1]);
            _print(res);
        }
    }
    
    return 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1;
    cin>>t;
    for(int i = 0; i < t; i++)
        solve();
}
