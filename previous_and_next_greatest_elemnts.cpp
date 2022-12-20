int n;
cin >> n;
vll a(n);
for(int i=0; i<n; i++) cin >> a[i];
vi nxtGE(n, n), prvGE(n, -1);
stack<pair<ll, int>> s;
for(int i=0; i<n; i++){
    if(s.empty()) {
        s.push({a[i], i});
        continue;
    }
    while(!s.empty() && s.top().first <= a[i]){
        nxtGE[s.top().second] = i;
        s.pop();
    }
    if(!s.empty()) prvGE[i] = s.top().second;
    s.push({a[i], i});
  }