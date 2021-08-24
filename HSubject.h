# Data-Structure-Project
#pragma once
#include <string>
#include<iostream>
#include <list>
#include"HashTable.h"
class HSubject:public HashTable<list<string>, string>
{
public:
	int h1(string k1);
	int h2(string k1, int i);
	HSubject(int size) :HashTable<list<string>, string >(size) //c-tor
	{
		for (int i = 0; i < length; i++)
		{
			(table+i)->data = *(new list<string>);
		}
	};
	~HSubject() {};
	void startNewTable(); //reset empty table
	void addSubjectAndTitle(string subject, string title);
	void remove(string subject);
	void printS(string subject);
	void printN(string subject,int n); //print n-first titles in the subject(or all of them)
	void print(); //print all
};


