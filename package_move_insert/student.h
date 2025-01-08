template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m) {
  CP::stack<T> temp;
  if (m > s2.size())
    m = s2.size();
  if (k >= mSize)
    k = mSize;
  for (int i = 0; i < k; i++)
  {
    temp.push(top());
    pop();
  }
  for (int i = 0; i < m; i++)
  {
    temp.push(s2.top());
    s2.pop();
  }
  while (!temp.empty())
  {
    push(temp.top());
    temp.pop();
  }
}
