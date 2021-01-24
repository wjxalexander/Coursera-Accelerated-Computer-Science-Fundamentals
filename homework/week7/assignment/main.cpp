class Node {
 public:
  int height;  // to be set by computeHeight()
  Node *left, *right;
  Node() {
    height = -1;
    left = right = nullptr;
  }
  ~Node() {
    delete left;
    left = nullptr;
    delete right;
    right = nullptr;
  }
};
void computeHeight(Node *n) {
  // Implement computeHeight() here.
  if (!n->left && !n->right) {
    n->height = 0;
    return;
  }
  int leftHeight = 0;
  int rightHeight = 0;
  if (n->left) {
    computeHeight(n->left);
    leftHeight = 1 + n->left->height;
  }
  if (n->right) {
    computeHeight(n->right);
    rightHeight = 1 + n->right->height;
  }
  n->height = leftHeight > rightHeight ? leftHeight : rightHeight;
}
int main() {
  Node *n = new Node();
  n->left = new Node();
  n->right = new Node();
  n->right->left = new Node();
  n->right->right = new Node();
  n->right->right->right = new Node();

  computeHeight(n);

  //   printTree(n);
  //   std::cout << std::endl << std::endl;
  //   printTreeVertical(n);

  // The Node destructor will recursively
  // delete its children nodes.
  delete n;
  n = nullptr;

  return 0;
}
