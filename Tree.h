# Data-Structure-Project
#include <iostream>
#include <list>
#include <string>
#pragma once
class Node
{
	string content;
	list<Node>* responses;
public:
	Node()
	{
		content = '\0';
		responses = { NULL };
	}
	/*
	Node(string val)
	{
		content = val;
		responses = { NULL };
	}
	*/

	~Node();
	void addR(string val)
	{
	
	}; //add response
	void addT(string val)
	{
		content = val;
		responses = { NULL };
	}; //add tree
	void delR(string val); //delete
};
