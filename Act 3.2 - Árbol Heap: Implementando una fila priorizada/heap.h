// Enrique Santos Fraire
// A01705746

#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED

#include <string>
#include <sstream>
#include "exception.h"
#include <iostream>

template <class T>
class Heap {
private:
	T *data;    // Es donde se almacenan los datos del arreglo
	unsigned int sze;   // Tamaño máximo del arreglo
	unsigned int count; // Cuenta los datos llenados
	unsigned int parent(unsigned int) const;    // Dato padre
	unsigned int left(unsigned int) const;      // Dato hijo a la izquierda
	unsigned int right(unsigned int) const;     // Dato hijo a la derecha
	void heapify(unsigned int);                 // Ajusta el árbol para que no se degenere
	void swap(unsigned int, unsigned int);      // Realiza el cambio de posiciones

public:
	Heap(unsigned int) throw (OutOfMemory); // Constructor
	~Heap();                                // Destructor
	bool empty() const;                     // Revisa que haya datos
	bool full() const;                      // Revisa si ya se llenó el arreglo
	void push(T) throw (Overflow);          // Agrega un nuevo elemento
	void pop() throw (NoSuchElement);       // Elimina el dato de la raíz
	void clear();                           // Limpia el arreglo
	int size();                             // Indica el numero de datos guardados
	T top() throw (NoSuchElement);          // Devuelve el valor de la raíz
	std::string toString() const;           // Convierte el arreglo a un string
};

template <class T>
Heap<T>::Heap(unsigned int tam) throw (OutOfMemory) {
    sze = tam;
    data = new T[sze];
    if (data == 0){
        throw OutOfMemory();
    }
    count = 0;
}

template <class T>
Heap<T>::~Heap() {
    delete [] data; data = 0;
    sze = 0; count = 0;
}

template <class T>
bool Heap<T>::empty() const {
    return (count == 0);
}

template <class T>
bool Heap<T>::full() const {
	return (count == sze);
}

template <class T>
unsigned int Heap<T>::parent(unsigned int pos) const {
	return (pos - 1) / 2;
}

template <class T>
unsigned int Heap<T>::left(unsigned int pos) const {
	return ((2 * pos) + 1);
}

template <class T>
unsigned int Heap<T>::right(unsigned int pos) const {
	return ((2 * pos) + 2);
}

template <class T>
void Heap<T>::swap(unsigned int i, unsigned int j) {
	T aux = data[i];
	data[i] = data[j];
	data[j] = aux;
}

template <class T>
void Heap<T>::heapify(unsigned int pos) {
    unsigned int le = left(pos);
	unsigned int ri = right(pos);
	unsigned int min = pos;
	if (le <= count && data[le] < data[min]) {
		min = le;
	}
	if (ri <= count && data[ri] < data[min]) {
		min = ri;
	}
	if (min != pos) {
		swap(pos, min);
		heapify(min);
	}
}

template <class T>
void Heap<T>::push(T val) throw (Overflow) {
    unsigned int pos;
	if (full()) {
		throw Overflow();
	}

	pos = count;
	count++;
	while (pos > 0 && val < data[parent(pos)]) {
		data[pos] = data[parent(pos)];
		pos = parent(pos);
	}
	data[pos] = val;
}

template <class T>
void Heap<T>::pop() throw (NoSuchElement) {
	if (empty()) {
		throw NoSuchElement();
	}
	T aux = data[0];

	data[0] = data[--count];
	heapify(0);
}

template <class T>
T Heap<T>::top() throw (NoSuchElement) {
	if (empty()) {
		throw NoSuchElement();
	}
	T aux = data[0];
	return aux;
}

template <class T>
int Heap<T>::size() {
    return count;
}

template <class T>
void Heap<T>::clear() {
    count = 0;
}


template <class T>
std::string Heap<T>::toString() const {
	std::stringstream aux;

	aux << "[";
	for (unsigned int i = 0; i < count; i++) {
		if (i != 0) {
			aux << " ";
		}
		aux << data[i];
	}
	aux << "]";
	return aux.str();
}

#endif // HEAP_H_INCLUDED
