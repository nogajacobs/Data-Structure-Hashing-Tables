# Data-Structure-Project
#include "Tree.h"



Tree::Tree()
{
}


Tree::~Tree()
{
}

Tree::~Tree()
{
	if (subject)
	{
		if ((subject->responses) != nullptr)
			(*subject->responses).clear();
	}
	delete subject;
}
void Tree::clear()
{
	clear(subject);
	subject = nullptr;
}
void Tree::clear(Node* subject)
{
	if ((subject->responses) != nullptr)
		clear(subject.responses);
}
