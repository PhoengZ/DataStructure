// You may include library here

int depth(node *n)
{
  if (n == nullptr)return -1;
  return std::max(1+depth(n->left_child),depth(n->right_sibling));
}