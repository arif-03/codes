#include <iostream>
#include <vector>

using namespace std;
bool is_sorted(vector<int> &a) {
  for (int i = 1; i < a.size(); i++) {
    if (a[i] < a[i - 1]) {
      return false;
    }
  }
  return true;
}

int solve(vector<int> &a) {
  int n = a.size();
  int operations = 0;
  while (!is_sorted(a)) {
    for (int i = 1; i <= n; i++) {
      a[i] = max(0, a[i - 1]);
    }
    operations++;
  }
  return operations;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int j = 0; j < n; j++) {
      cin >> a[j];
    }
    cout << solve(a) << endl;
  }
  return 0;
}

