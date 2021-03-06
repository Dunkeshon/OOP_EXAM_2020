#pragma once

#include "TreeNode.h"

template <typename KeyType, typename DataType>
class BinarySearchTree {
public:
	virtual void insert(KeyType key, DataType* data) = 0;
	virtual void remove(KeyType key) = 0;
	virtual void clear() = 0;

	virtual TreeNode<KeyType, DataType>* search(KeyType key) = 0;
	virtual TreeNode<KeyType, DataType>* getRoot() = 0;

};
