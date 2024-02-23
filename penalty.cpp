#include <bits/stdc++.h>

using namespace std;

int remaining_kicks(int n, int p) {
  int s = 0;
  for (int i = n; i < 10; i++) {
    if (i % 2 == p)
      s++;
  }
  return s;
}

int kicks(string s, int t1, int t2, int i) {
  if (i == 10 || t1 > t2 + remaining_kicks(i, 1) || t2 > t1 + remaining_kicks(i, 0))
    return i;
  if (s[i] == '?') {
    s[i] = '1';
    int n1 = kicks(s, t1, t2, i);
    s[i] = '0';
    int n2 = kicks(s, t1, t2, i);
    return (n1 < n2 ? n1 : n2) ;
  }
  if (i % 2 == 0) {
    t1 += (s[i] == '1');
  } else {
    t2 += (s[i] == '1');
  }
  return kicks(s, t1, t2, i + 1);
}

int main() {
  int t;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    cout << kicks(s, 0, 0, 0) << endl;
  }
  return 0;
}