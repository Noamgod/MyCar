#include "MyCar.h"

class Node {
private:
    MyCar data;
    Node *next = nullptr;

public:

    Node(MyCar &car);

    Node();
    ~Node();
    Node(const Node &other);

    const MyCar* getData() ;

    void setData(const MyCar &data);

    Node *getNext() const;

    void setNext(Node *next);


};