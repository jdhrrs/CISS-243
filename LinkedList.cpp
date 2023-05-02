#include <iostream>
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList()
    : head(nullptr), listSize(0) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* next = current->next;
        delete current;
        current = next;
    }
}

template <typename T>
void LinkedList<T>::add(T data) {
    Node<T>* newNode = new Node<T>{ data, nullptr };
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    listSize++;
}

template <typename T>
void LinkedList<T>::insert(int index, T data) {
    if (index < 0 || index > listSize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    Node<T>* newNode = new Node<T>{ data, nullptr };
    if (index == 0) {
        newNode->next = head;
        head = newNode;
    }
    else {
        Node<T>* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
    listSize++;
}

template <typename T>
void LinkedList<T>::remove(int index) {
    if (index < 0 || index >= listSize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    Node<T>* nodeToRemove;
    if (index == 0) {
        nodeToRemove = head;
        head = head->next;
    }
    else {
        Node<T>* current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current->next;
        }
        nodeToRemove = current->next;
        current->next = nodeToRemove->next;
    }
    delete nodeToRemove;
    listSize--;
}

template <typename T>
void LinkedList<T>::update(int index, T data) {
    if (index < 0 || index >= listSize) {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    Node<T>* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    current->data = data;
}

template <typename T>
T LinkedList<T>::get(int index) {
    if (index < 0 || index >= listSize) {
        std::cout << "Invalid index" << std::endl;
        return T();
    }
    Node<T>* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    return current->data;
}

template <typename T>
int LinkedList<T>::size() {
    return listSize;
}
