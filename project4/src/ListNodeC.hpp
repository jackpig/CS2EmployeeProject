/*
 * ListNodeC.hpp
 *
 *  Created on: May 2, 2016
 *      Author: student
 */

#ifndef LISTNODEC_HPP_
#define LISTNODEC_HPP_

#include <cstddef>
#include <iostream>
#include <string>
#include <list>

template<class T>
struct ListNode {
	T *data;
	ListNode<T> *next;
};

template<class T>
class ListNodeC {

private:
	ListNode<T> *head;
	ListNode<T> *currentPtr;

public:
	ListNodeC() {
		head = nullptr;
		currentPtr = nullptr;
	}
	virtual ~ListNodeC() {
		destroyList();
	}

	//bool getCurrentPtr();
	void gotoFirst();
	void gotoNext();
	//void printList(ListNode *);
	void appendNode(T *);
	void destroyList();
	//int countList();
	void clear();
	//void deleteLast();
	//void deleteFirst();
	int size();
	T getCurrent();
};

/*template <class T>
 void ListNodeC::printList(ListNode *startNode) {
 if (startNode == nullptr) {
 cout << "End of linked list print out\n";
 } else {
 }
 }*/

/*template <class T>
 void ListNodeC<T>::deleteLast() {
 ListNode *tempNode = head;
 ListNode *previousNode = nullptr;

 if(tempNode == nullptr || tempNode->next == nullptr){
 delete tempNode->data;
 delete tempNode;
 tempNode = nullptr;
 }
 else{
 while (tempNode->next != nullptr) {
 previousNode = tempNode;
 tempNode = tempNode->next;
 delete tempNode->data;
 delete tempNode;
 previousNode->next = nullptr;
 }
 }

 return;
 }

 template <class T>
 void ListNodeC<T>::deleteFirst() {
 ListNode *tempNode = head;

 if (head != nullptr) {
 tempNode = head->next;
 delete head->data;
 delete head;
 tempNode->prev = nullptr;
 head = tempNode;
 } else {

 }
 return;
 }
 */
template<class T>
void ListNodeC<T>::appendNode(T * newValue) {
	ListNode<T> *tempNode;
	ListNode<T> *newNode;

	newNode = new ListNode<T>;
	newNode->data = newValue;
	newNode->next = nullptr;

	if (!head) {
		head = newNode;
	} else {
		tempNode = head;
		while (tempNode->next) {
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
	}

	return;
}

/*template <class T>
 void ListNodeC<T>::addZombie(Zombie * aZombie) {
 ListNode *tempNode;
 tempNode = new ListNode;
 tempNode->data = aZombie;
 tempNode->prev = nullptr;
 tempNode->next = nullptr;
 if (head == nullptr) {
 head = tempNode;
 } else {
 appendNode(tempNode);
 }

 return;
 }*/

/*template <class T>
 int ListNodeC<T>::countList() {
 int count = 0;
 ListNode *tempNode = head;

 if (head == nullptr) {
 return count;
 }else if(!head){
 count = -999;
 std::cout << "Linked list not exist.\n";
 return count;
 }
 else {
 count++;
 while (tempNode->next != nullptr) {
 count++;
 tempNode = tempNode->next;
 }
 }
 return count;
 }*/

template<class T>
void ListNodeC<T>::destroyList() {
	ListNode<T> *tempNode = head;
	ListNode<T> *nextNode = nullptr;

	while (tempNode != nullptr) {
		nextNode = tempNode->next;
		delete tempNode;
		tempNode = nextNode;
	}

	return;
}

template<class T>
void ListNodeC<T>::clear() {

}


/*template<class T>
 bool ListNodeC<T>::getCurrentPtr() {
 if (currentPtr == nullptr) {
 return false;
 } else {
 return true;
 }
 }*/

template<class T>
T ListNodeC<T>::getCurrent() {
	T aZombie;
	aZombie = *currentPtr->data;
	return aZombie;
}

template<class T>
void ListNodeC<T>::gotoFirst() {
	currentPtr = head;
	return;
}

template<class T>
void ListNodeC<T>::gotoNext() {
	if(currentPtr->next){
	currentPtr = currentPtr->next;
	}
	else{
	}
	return;
}

template<class T>
int ListNodeC<T>::size() {
	int anInt = 0;
	ListNode<T> *tempNode = head;

	if (tempNode == nullptr) {
	} else if (tempNode->next == nullptr) {
		anInt = 1;
	}

	else {
		anInt++;
		while (tempNode->next != nullptr) {
			tempNode = tempNode->next;
			anInt++;
		}
	}

	return anInt;
}

#endif /* LISTNODEC_HPP_ */
