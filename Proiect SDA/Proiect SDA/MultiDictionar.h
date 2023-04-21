#include "Lista.h"

template<class K, class V>
class MultiDictionar
{
private:
    struct Node {
        K key;
        Lista<V>* values;
        Node* next;
        Node(K key, V value) { 
            this->key = key;
            this->values = new Lista<V>();
            this->values->adaugare(value);
            this->next = nullptr;
        }
    };

    Node* head;

    /// <summary>
    /// gaseste in fuctie de cheie
    /// </summary>
    /// <param name="key"></param>
    /// <returns>elementul cu cheia respectiva</returns>
    Node* find(K key) {
        Node* current = head;
        while (current != nullptr) {
            if (current->key == key) {
                return current;
            }
            current = current->next;
        }
        return nullptr;
    }

public:
    /// <summary>
    /// constructor implicit
    /// </summary>
    MultiDictionar() {
        head = nullptr;
    }

    ///desconstructor
    ~MultiDictionar() {
        Node* current = head;
        Node* next;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
    }

    /// <summary>
    /// adaugare o pereche cheie valoare
    /// </summary>
    /// <param name="key">cheia </param>
    /// <param name="value">valoarea</param>
    void adaugareDict(K key, V value) {
        Node* current = find(key);
        if (current == nullptr) {
            Node* node = new Node(key, value);
            node->next = head;
            head = node;
        }
        else {
            current->values->adaugare(value);
        }
    }

    /// <summary>
    /// stergere o cheie din dictionar
    /// </summary>
    /// <param name="key">cheia dictionarului</param>
    /// <returns></returns>
    Lista<V> stergereDict(K key) {
        Node* current = find(key);// gaseste elemenetul cu cheia pe care dorim sa l stergem
        if (current != nullptr) {
            Lista<V>* values = current->values;
            Node* prev = nullptr;
            Node* next = current->next;
            while (next != nullptr) {
                if (next->key == key) {
                    if (prev == nullptr) {
                        head = next;
                    }
                    else {
                        prev->next = next;
                    }
                    delete next;
                    break;
                }
                prev = next;
                next = next->next;
            }
            return *values;//returneaza celelate chei din dict
        }
        return Lista<V>();// return lista goala
    }

    /// <summary>
    /// returneaza valori ale unei chei cheie
    /// </summary>
    /// <param name="key">cheia </param>
    /// <returns></returns>
    Lista<V> getAll(K key) {
        Node* current = find(key);
        if (current != nullptr) {
            return *(current->values);//returneaza valorile dictionarului
        }
        return Lista<V>();
    }

    /// <summary>
    /// returneaza toate valorile dictionarului
    /// </summary>
    /// <returns></returns>
    Lista<V> getAll() {
        Lista<V> values;
        Node* current = head;
        while (current != nullptr) {
            values.adaugare(*current->values);
            current = current->next;
        }
        return values;
    }
};


