# Data-Structure-Project
#include "TreeList.h"
TreeList::TreeList()
{

}

void TreeList::addNewTree(string val)
{
	Node subject(val);
	root.push_back(subject);
}

TreeList::~TreeList()
{

}

TreeList::~TreeList()
{
	list<Node>* tmp;
	while (lst)
	{
		tmp = lst;
		lst = lst.next; //

	}
	delete lst;
}
