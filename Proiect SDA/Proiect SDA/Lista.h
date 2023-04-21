#pragma once

#include "Node.h"

template<class T>
class Lista {
public:
    /// <summary>
    /// constructor implicit
    /// </summary>
    Lista();

    ///desconstrcutor
    ~Lista();

    /// <summary>
    /// adaugare element in lista
    /// </summary>
    /// <param name="">elementul adaugat</param>
    void adaugare(T);

    void adaugare(Lista<T>& lista);

    /// <summary>
    /// stergere element din lista
    /// </summary>
    /// <param name="">elemntul pe care vrem sa l stergem</param>
    void stergere(T);

    /// <summary>
    /// modificare 
    /// </summary>
    /// <param name=""></param>
    /// <param name=""></param>
    void modidificare(T, T);


    /// <summary>
    /// modificare cand mi se da pozitia 
    /// </summary>
    /// <param name="pozitie"></param>
    /// <param name="val"></param>
    void modificare(int pozitie, T val);

    /// <summary>
    /// cautare element
    /// </summary>
    /// <param name="">ce element cautam</param>
    /// <returns>elementul cautat</returns>
    bool cautare(T);

    /// <summary>
    /// element de pe o pozitie
    /// </summary>
    /// <param name="index">pozitia</param>
    /// <returns>elemntul de pe respectiva pozitie</returns>
    T get(int index);

    int size();

private:
    Node<T>* head;
};

template<class T>
inline Lista<T>::Lista() : head(nullptr)
{

}


template<class T>
inline Lista<T>::~Lista()
{
}

template<class T>
inline void Lista<T>::adaugare(T e)
{
    Node<T>* node = new Node<T>(e);
    node->next = nullptr;

    if (head == nullptr) {
        head = node;
    }
    else {
        Node<T>* aux = head;
        while (aux->next != nullptr) {
            aux = aux->next;
        }
        aux->next = node;
    }
}

template<class T>
inline void Lista<T>::adaugare(Lista<T>& lista) {
    Node<T>* current = lista.head;
    while (current != nullptr) {
        adaugare(current->info);
        current = current->next;
    }
}


template<class T>
inline void Lista<T>::stergere(T e)
{
    if (head != nullptr) {
        Node<T>* aux = head;
        Node<T>* prev = nullptr;
        while (aux != nullptr) {
            if (aux->info == e) {
                if (prev == nullptr) {
                    head = aux->next;
                }
                else {
                    prev->next = aux->next;
                }
                delete aux;
                break;
            }
            prev = aux;
            aux = aux->next;
        }
    }
}

template<class T>
inline void Lista<T>::modidificare(T vechi, T nou) {
    if (head != nullptr) {
        Node<T>* aux = head;
        while (aux != nullptr) {
            if (aux->info == vechi) {
                aux->info = nou;
                break;
            }
            aux = aux->next;
        }
    }
}

template<class T>
inline void Lista<T>::modificare(int pozitie, T val) {
    if (head != nullptr) {
        Node<T>* aux = head;
        int i = 0;
        while (aux != nullptr) {
            if (i == pozitie) {
                aux->info = val;
                break;
            }
            aux = aux->next;
            i++;
        }
    }
}



template<class T>
inline bool Lista<T>::cautare(T e)
{
    if (head != nullptr) {
        Node<T>* aux = head;
        while (aux != nullptr) {
            if (aux->info == e) {
                return true;
            }
            aux = aux->next;
        }
    }
    return false;
}

template<class T>
inline T Lista<T>::get(int index)
{
    if (head != nullptr) {
        Node<T>* aux = head;
        int i = 0;
        while (aux != nullptr) {
            if (i == index) {
                return aux->info;
            }
            i++;
            aux = aux->next;
        }
    }

    return T();
}


template<class T>
inline int Lista<T>::size() {
    if (head != nullptr) {
        Node<T>* aux = head;
        int i = 0;
        while (aux != nullptr) {
            i++;
            aux = aux->next;
        }
        return i;
    }
    return 0;
}
