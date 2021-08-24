# Data-Structure-Project
#pragma once
#include "Item.h"
#include <cmath>
#include<iostream>
using namespace std;
//enum state { empty, full, deleted };
template <class T, class K>
class HashTable
{
protected:
	Item<T, K>* table;
	int length;
public:
	HashTable(int size) //c-tor
	{
		length = findClosePrimeNumber(size);
		table = new Item<T, K>[length];
	};
	~HashTable() //d-tor
	{
		if (this->table)
		{
			delete[] this->table;
		}
		this->table = NULL;
	};
	virtual int h1(K k1) = 0; 
	virtual int h2(K k1, int i) = 0;
	int hash(K k1, int i) //use h1&h2
	{
		return  (h1(k1) + i * h2(k1, i)) % (length);
	}
	int find(K k1) 
	{
		int i = 0;
		if (table[h1(k1)].key == k1) //if the first hash succided
		{
			return h1(k1);
		}
		while( i < length)
		{
			if (table[hash(k1, i)].flag == 0)
				return -1;
			if (table[hash(k1, i)].flag == full && table[hash(k1, i)].key == k1)
				return hash(k1, i);
			i++;
		}
		return -1; //not found
	}
	int findClosePrimeNumber(int num) // find closest(equal/bigger) prime number
	{
		while (true) //until finding
		{
			if (isPrime(num))
				return num;
			num++;
		}
	}
	bool isPrime(int num) 
	{
		for (int i = 2; i <= sqrt((double)num); i++)
		{
			if (num % i == 0)
				return false;
		}
		return true;
	}

void addItem(T t1, K k1)
{
	bool b = true;
	int i = 0;
	if (table[h1(k1)].flag != full) //if the first hash succided
	{
		table[h1(k1)].data = t1;
		table[h1(k1)].key = k1;
		table[h1(k1)].flag = full;
		b = false;
	}
	while (b && i < length)
	{
		if (table[hash(k1, ++i)].flag != full)
		{
			table[hash(k1, i)].data = t1;
			table[hash(k1, i)].key = k1;
			table[hash(k1, i)].flag = full;
			b = false;
		}
	}
}
	void delItem(Item<T, K> it)
	{
		int index = find(it.key);
		if (index != -1) 
			table[index].flag = deleted;
	}
	void update(int index, Item<T, K> it)
	{
		int i = find(it.key);
		if (i == -1 && h1(it.key)== table[index].key && i==index) //if the keys are equal
		{
			table[index].data = it.data;
		}
	}
	void print() //print all
	{
		for (int i = 0; i < length; i++)
		{
			if (table[i].flag == full)
			{
				cout << table[i].key << ": " << table[i].data << endl; 
			}
		}
	}
};




