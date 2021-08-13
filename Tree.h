# Data-Structure-Project
#include <iostream>
#include <list>
#include <string>
#include "Node.h"

using namespace std;
#pragma once
class Tree
{
	Node root;
public:
	Tree();
	Tree(string val) 
	{
		root.addR(val);
	};
	~Tree();
	void newR(string val);
	void newT(string val) 
	{
		root.addT(val);
	}
	void root(string val);


	void clear();
	void clear(Node* subject);

};
