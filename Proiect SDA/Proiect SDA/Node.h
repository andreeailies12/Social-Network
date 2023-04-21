#pragma once

template<class T>
class Lista;

template<class T>
class Node {
private:
    T info;
    Node<T>* next;
public:
    Node<T>(T info_);

    friend class Lista<T>;
};

template<class T>
inline Node<T>::Node(T info_) : info(info_),  next()
{
}
