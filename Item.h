# Data-Structure-Project
#pragma once
enum state { empt, full, deleted }; //flag
template <class T, class K>
class Item
{
public:
	T data;
	K key;
	state flag;
	Item<T,K>(){ flag = empt; }; //reset an empty item
	Item<T,K>(T d, K k) { data = d; key = k; flag = full; };
};


 
