cmake_minimum_required(VERSION 3.12)
project(OOP_EXAM)

set(CMAKE_CXX_STANDARD 17)

include_directories(includes)

set(SOURCES
		src/HashFunction.cpp)

set(HEADERS
		includes/linkedlists.h
		includes/TreeNode.h
		includes/BinarySearchTree.h
		includes/RedBlackTree.h
		includes/SplayTree.h
		includes/AVLTreeNode.h
		includes/AVLTree.h
		includes/HashNode.h
		includes/HashTable.h
		includes/HashFunction.h
		includes/SeparateChainingTable.h
		includes/LinearProbingTable.h
		includes/Iterator.h
		includes/Set.h)

add_executable(OOP_EXAM unit-tests/main.cpp ${SOURCES} ${HEADERS})
