#include "Node.h"

Node::Node(MyCar &car) {
    data = car;
    next= nullptr;
}
Node::Node(){
    next = nullptr;
}

const MyCar* Node::getData()  {
    return &data;
}

void Node::setData(const MyCar &data) {
    Node::data = data;
}

Node *Node::getNext() const {
    return next;
}

void Node::setNext(Node *next) {
    Node::next = next;
}

Node::~Node() {
};
Node::Node(const Node &other) {

    this->next = other.next;
    this->data = other.data;
}
