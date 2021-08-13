# Data-Structure-Project
#pragma once
#include <iostream>
#include <list>
#include <string>
#include "tree.h"

#pragma once
using namespace std;
class TreeList
{
	list <Tree*> tl;
public:
	TreeList() { tl = { NULL }; };
	/*
	TreeList(string val)
	{

		Tree subject(val);
		tl.push_back(&subject);
	};
	*/
	void addNewTree(string val)
	{
		Tree subject;
		subject.newT(val);
		tl.push_back(&subject);
	};

	bool addResponse(string title, string father, string val)
	{
		while
	};
	bool delResponse(string title, string val)
	{

	};
	void printAllTrees()
	{

	};


	void addT(string sub); //new tree
	void delT(Node* root); //delete tree
	void findAndPrint(string val); //printing all the routes to the codcodes with the asked string
	void addD(string tree, string val, string response);
	void delD(string tree, string val);
	void printT(string tree);
	void printRoute(string tree, string val);

	~TreeList();

};
