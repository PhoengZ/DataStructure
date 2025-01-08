#include <bits/stdc++.h>
#include "map_bst.h"
#include "student.h"

template <typename T>
void test() {
  CP::map_bst<T, int> m;
  int N, Fix;
  T x;
  std::vector<T> v;

  std::cin >> N >> Fix;

  for (int i = 0; i < N; i++) {
    std::cin >> x;
    if (i < Fix - 1)
      v.push_back(x);
    else
      m[x] = 0;
  }

  m.add_par(v);

  std::cout << m.sum_leaves_depth();
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin >> t;

  if (t == 1) test<int>();
  if (t == 2) test<std::string>();

  std::cout << "\nOK 4J6R9X2PQH8F5K1L7E3";
}
