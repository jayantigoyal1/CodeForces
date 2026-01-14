#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k>n){
            cout<<-1<<endl;
            continue;
        }
        queue<pair<long long, long long>> q;
        unordered_set<long long> visited;
        q.push({n,0});
        visited.insert(n);
        long long answer = -1;
        while (!q.empty()) {
            long long curr = q.front().first;
            long long steps = q.front().second;
            q.pop();
            if(curr==k){
                answer=steps;
                break;
            }
            long long left=curr/2;
            long long right=(curr+1)/2;
            if (left >= k && !visited.count(left)) {
                visited.insert(left);
                q.push({left, steps + 1});
            }

            if (right >= k && !visited.count(right)) {
                visited.insert(right);
                q.push({right, steps + 1});
            }
        }

        cout << answer << endl;
    }

    return 0;
}
