#ifndef DLIST_H_INCLUDED
#define DLIST_H_INCLUDED
#include <string>
#include <sstream>
#include "exception.h"

template <class T> class DList;
template <class T> class DListIterator;

template <class T>
class DLink {
private:
	DLink(T);
	DLink(T, DLink<T>*, DLink<T>*);
	DLink(const DLink<T>&);

	T	    value;
	DLink<T> *previous;
	DLink<T> *next;

	friend class DList<T>;
	friend class DListIterator<T>;
};

template <class T>
DLink<T>::DLink(T val) : value(val), previous(0), next(0) {}

template <class T>
DLink<T>::DLink(T val, DLink *prev, DLink* nxt) : value(val), previous(prev), next(nxt) {}

template <class T>
DLink<T>::DLink(const DLink<T> &source) : value(source.value), previous(source.previous), next(source.next) {}

template <class T>
class DList {
public:
	DList();
	DList(const DList<T>&) throw (OutOfMemory);
	~DList();

	void add(T) throw (OutOfMemory);
	int find(int);
	void update(int,int) const throw (IndexOutOfBounds, NoSuchElement);
    T    remove(int) throw (IndexOutOfBounds);
	T    removeFirst() throw (NoSuchElement);

	int  length() const;
	bool empty() const;
	void clear();
	std::string toStringForward() const;
	std::string toStringBackward() const;

private:
	DLink<T> *head;
	DLink<T> *tail;
	int 	 size;

	friend class DListIterator<T>;
};

template <class T>
DList<T>::DList() : head(0), tail(0), size(0) {}

template <class T>
DList<T>::~DList() {
	clear();
}

template <class T>
bool DList<T>::empty() const {
	return (head == 0 && tail == 0);
}

template <class T>
int DList<T>::length() const {
	return size;
}

// O(n)
template <class T>
void DList<T>::add(T val) throw (OutOfMemory) {
	DLink<T> *newLink;

	newLink = new DLink<T>(val);
	if (newLink == 0) {
		throw OutOfMemory();
	}

	if (empty()) {
		head = newLink;
		tail = newLink;
	} else {
		tail->next = newLink;
		newLink->previous = tail;
		tail = newLink;
	}
	size++;
}

// O(n)
template <class T>
int DList<T>::find(int num) {
	int pos;
	DLink<T> *p;

	p = head;
	pos = 0;
	while (p != 0) {
		if (p->value == num) {
			return pos;
		}
		p = p->next;
		pos++;
	}
	return -1;
}

// O(n)
template <class T>
void DList<T>::update(int index, int val) const throw (IndexOutOfBounds, NoSuchElement) {
	int pos;
	DLink<T> *p;

	if (index < 0 || index >= size) {
		throw IndexOutOfBounds();
	}

	if (index == 0) {
        head->value= val;
		return;
	}

	p = head;
	pos = 0;
	while (pos != index) {
		p = p->next;
		pos++;
	}
    p->value=val;

	return;
}

// O(1)
template <class T>
T DList<T>::removeFirst() throw (NoSuchElement) {
	T val;
	DLink<T> *p;

	if (empty()) {
		throw NoSuchElement();
	}

	p = head;
	val = p->value;

	if (head == tail) {
		head = 0;
		tail = 0;
	} else {
		head = p->next;
		p->next->previous = 0;
	}
	delete p;
	size--;

	return val;
}

// O(n)
template <class T>
T DList<T>::remove(int index) throw (IndexOutOfBounds) {
	int pos;
	T val;
	DLink<T> *p;

	if (index < 0 || index >= size) {
		throw IndexOutOfBounds();
	}

	if (index == 0) {
		return removeFirst();
	}

	p = head;
	pos = 0;
	while (pos != index) {
		p = p->next;
		pos++;
	}

	val = p->value;
	p->previous->next = p->next;
	if (p->next != 0) {
		p->next->previous = p->previous;
	}
	size--;

	delete p;

	return val;
}

// Limpiar estructura
template <class T>
void DList<T>::clear() {
	DLink<T> *p, *q;

	p = head;
	while (p != 0) {
		q = p->next;
		delete p;
		p = q;
	}
	head = 0;
	tail = 0;
	size = 0;
}

// Convierte la estructura de datos a string de derecha a izquierda
template <class T>
std::string DList<T>::toStringForward() const {
    std::stringstream aux;
    DLink<T> *p;

    p = head;
    aux << "[";
    while (p != 0) {
        aux << p->value;
        if (p->next != 0) {
            aux << ", ";
        }
        p = p->next;
    }
    aux << "]";
    return aux.str();
}

// Convierte la estructura de datos a string de izquierda a derecha
template <class T>
std::string DList<T>::toStringBackward() const {
    std::stringstream aux;
    DLink<T> *p;

    p = tail;
    aux << "[";
    while (p != 0) {
        aux << p->value;
        if (p->previous != 0) {
            aux << ", ";
        }
        p = p->previous;
    }
    aux << "]";
    return aux.str();
}

#endif // DLIST_H_INCLUDED
