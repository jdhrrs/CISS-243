#include <string>
#include <iostream>

using namespace std;

// BinaryTree template
template <class T>
class BinaryTree {
private:
    struct TreeNode {
        T value;                // The value in the node
        TreeNode* left;         // Pointer to left child node
        TreeNode* right;        // Pointer to right child node
    };

    TreeNode* root;             // Pointer to the root node

    // Private member functions
    void destroySubTree(TreeNode*);
    void makeDeletion(TreeNode*&);
    void displayPreOrder(TreeNode*) const;
    void displayPostOrder(TreeNode*) const;
    void deleteNode(const T& value, TreeNode*& node);
    void displayInOrder(TreeNode* node) const;

public:

    // Constructor
    BinaryTree() {
        root = nullptr;
    }

    // Destructor
    ~BinaryTree() {
        destroySubTree(root);
    }

    // Binary tree operations
    void insertNode(T);
    bool searchNode(T);
    void remove(T);
    void insert(TreeNode*&, TreeNode*&);

    void displayInOrder() const {
        displayInOrder(root);
    }

    void displayPreOrder() const {
        displayPreOrder(root);
    }

    void displayPostOrder() const {
        displayPostOrder(root);
    }
};

// insert accepts a TreeNode pointer and a pointer to a node.
// The function inserts the node into the tree pointed to by
// the TreeNode pointer. This function is called recursively.
template <class T>
void BinaryTree<T>::insert(TreeNode*& nodePtr, TreeNode*& newNode)
{
    if (nodePtr == nullptr)
        nodePtr = newNode; // Insert the node
    else if (newNode->value < nodePtr->value)
        insert(nodePtr->left, newNode); // Search the left branch
    else
        insert(nodePtr->right, newNode); // Search the right branch
}

// insertNode creates a new node to hold num as its value,
// and passes it to the insert function.
template <class T>
void BinaryTree<T>::insertNode(T item) {
    TreeNode* newNode = nullptr;    // Pointer to a new node

    // Create a new node and store num in it.
    newNode = new TreeNode;
    newNode->value = item;
    newNode->left = newNode->right = nullptr;

    // Insert the node.
    insert(root, newNode);
}

// destroySubTree is called by the destructor. It
// deletes all nodes in the tree.
template <class T>
void BinaryTree<T>::destroySubTree(TreeNode* nodePtr) {
    if (nodePtr) {
        if (nodePtr->left)
            destroySubTree(nodePtr->left);
        if (nodePtr->right)
            destroySubTree(nodePtr->right);
        delete nodePtr;
    }
}

template<class T>
inline void BinaryTree<T>::makeDeletion(TreeNode*&)
{
}

// searchNode determines if a value is present in
// the tree. If so, the function returns true.
// Otherwise, it returns false.
template <class T>
bool BinaryTree<T>::searchNode(T item) {
    TreeNode* nodePtr = root;

    while (nodePtr) {
        if (nodePtr->value == item)
            return true;
        else if (item < nodePtr->value)
            nodePtr = nodePtr->left;
        else
            nodePtr = nodePtr->right;
    }
    return false;
}

// deleteNode deletes the node whose value
// member is the same as num.
// displayPostOrder recursively displays the tree in postorder.
template <typename T>
void BinaryTree<T>::deleteNode(const T & value, TreeNode * &node) {
    if (node == nullptr) {
        return;
    }
    if (value < node->value) {
        deleteNode(value, node->left);
    }
    else if (value > node->value) {
        deleteNode(value, node->right);
    }
    else {
        if (node->left == nullptr && node->right == nullptr) {
            delete node;
            node = nullptr;
        }
        else if (node->left == nullptr) {
            TreeNode* temp = node;
            node = node->right;
            delete temp;
        }
        else if (node->right == nullptr) {
            TreeNode* temp = node;
            node = node->left;
            delete temp;
        }
        else {
            TreeNode* minRight = node->right;
            while (minRight->left != nullptr) {
                minRight = minRight->left;
            }
            node->value = minRight->value;
            deleteNode(minRight->value, node->right);
        }
    }
}

template <typename T>
void BinaryTree<T>::displayInOrder(TreeNode* node) const {
    if (node == nullptr) {
        return;
    }
    displayInOrder(node->left);
    std::cout << node->value << " "; // with this line
    displayInOrder(node->right);
}