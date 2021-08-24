# Data-Structure-Project
#include "HSubject.h"
#include<string>
#include"Item.h"
#include<iostream>
#include <iterator>
int HSubject::h1(string k1)
{
	int sum = 0;
	for (int i = 0; i < k1.length(); i++)
	{
		sum += k1[i] * (i + 1);
	}
	return sum % length;
}
int HSubject::h2(string k1, int i)
{
	return (((k1[i] * (i + 1) )% (length-1))+1);
}
void HSubject::startNewTable()
{
	for (int i = 0; i < length; i++)
	{
		if (table[i].flag == full)
		{
			table[i].data.erase(table[i].data.begin(), table[i].data.end()); //delete data
		}
		table[i].flag = empt;
	}
}
void HSubject::addSubjectAndTitle(string subject, string title)//if not find
{
	int index = find(subject);
	if (index==-1) //subject not found
	{
		list<string> lst;
		lst.push_front(title);
		addItem(lst, subject);
	}
	else //subject is already exist
	{
		table[index].data.push_front(title);
	}
}
void HSubject::remove(string subject)
{
	int index = find(subject);
	if (index != -1) //subject was found
	{
		delItem(table[index]);
	}
}
void HSubject::printS(string subject) //print all the titels of the subject
{
	int index = find(subject);
	if (index != -1) //subject was found
	{
		for ( list<string>::iterator it = table[index].data.begin(); it != table[index].data.end(); it++) //for all titels in that subject
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
		cout << "ERROR\n";
}
void HSubject::printN(string subject, int n) //print n-first titles in the subject(and if n>length ->print all of them)
{
	int index = find(subject);
	if (index != -1) //subject was found
	{
		int i = 0;
		for (list<string>::iterator it = table[index].data.begin(); it != table[index].data.end() && i < n; it++)//for n(/all) titels in that subject
		{
			i++;
			cout << *it << " ";
		}
		cout << endl;
	}
	else
		cout << "ERROR\n";
}
void HSubject::print() //print all
{
	for (int i = 0; i < length; i++) //for all items
	{
		if (table[i].flag == full)
		{
			cout << table[i].key << ": ";
			for (list<string>::iterator it = table[i].data.begin(); it != table[i].data.end(); it++) //for all titels in that subject
			{
				cout << *it << " ";
			}
			cout << endl;
		}
	}
}
