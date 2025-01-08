   std::stringstream ss;
    ss << i;
    s.insert(ss.str());
  }
  auto it1 = s.begin();
  auto it2 = it1;
  int n = 3;
  for (int i = 0;i < n;i++) it2++;
  CP::stack<std::string> st(it1,it2);
  for (int i = 1;i <= n;i++) {
    if (st.empty()) return false;
    std::cout << st.top() << std::endl;
    std::stringstream ss;
    ss << i;
    if (st.top() != ss.str()) return false;
    st.pop();
  }