#include "ManageCar.h"

ManageCar::ManageCar() {
    header = nullptr;
    count = 0;
}

void ManageCar::addCar() {
    MyCar *car = new MyCar();
    car = car->creat();
    count++;
    Node *node = new Node(*car);
    if (header == nullptr) {
        header = node;
    } else {
        Node *temp = new Node();
        temp->setNext(header);
        if (node->getData()->getId() < header->getData()->getId()) {
            header = node;
            node->setNext(temp->getNext());
        }
        while (temp->getNext() != nullptr) {
            if (temp->getNext()->getData()->getId() > node->getData()->getId())
                break;
            temp = temp->getNext();
        }
        Node *temp1 = new Node();
        temp1 = temp->getNext();
        temp->setNext(node);
        node -> setNext(temp1);
    }

}

void ManageCar::removeCar(int id) {
    if (id < 1 ) {
        println("Sorry we can't find this car")
        return;
    }
    Node *temp = new Node();
    temp->setNext(header);
    if (header->getData()->getId() == id){
        header = header->getNext();
        printAll();
        delete temp;
        return;
    } else {
        do {
            if (temp->getNext()->getData()->getId() == id) {
                temp->setNext(temp->getNext()->getNext());
                return;
            }
            temp = temp->getNext();
        } while (temp->getNext() != nullptr);
        println("Sorry we can't find this car")
        printAll();
    }
    count--;
}

Node *ManageCar::getHeader() const {
    return header;
}

int *ManageCar::CarsFromToYears(int fromYear, int toYear) {
    int i = 0, sum = 0;
    Node *temp = new Node();
    temp = header;
    while (temp != nullptr) {
        if (fromYear <= temp->getData()->getYear() && temp->getData()->getYear() <= toYear) {
            sum++;
        }
        temp = temp->getNext();
    }
    int *arr = new int[sum];
    temp = header;
    while (temp != nullptr) {
        if (fromYear <= temp->getData()->getYear() && temp->getData()->getYear() <= toYear) {
            arr[i] = (temp->getData())->getId();
            i++;
        }
        temp = temp->getNext();
    }
    print("The cars between years: ")
    for (int j = 0; j < i; j++) {
        print(arr[j] << " ")
    }
    println("")


    return arr;
}

int *ManageCar::CarsFromToPrices(int fromPrice, int toPrice) {
    int i = 0, sum = 0;
    Node *temp = new Node();
    temp = header;
    while (temp != nullptr) {
        if (fromPrice <= temp->getData()->getPrice() && temp->getData()->getPrice() <= toPrice) {
            sum++;
        }
        temp = temp->getNext();
    }
    int *arr = new int[sum];
    temp = header;
    while (temp != nullptr) {
        if (fromPrice <= temp->getData()->getPrice() && temp->getData()->getPrice() <= toPrice) {
            arr[i] = (temp->getData())->getId();
            i++;
        }
        temp = temp->getNext();
    }
    print("The cars between this price: ")
    for (int j = 0; j < i; j++) {
        print(arr[j] << " ")
    }
    println("")
    return arr;
}

void ManageCar::printCar(int id) {

    Node *temp = new Node();
    temp = header;
    do {
        if (id == temp->getData()->getId()) {
            println("Id: " << temp->getData()->getId()
                           << " Price: " << temp->getData()->getPrice()
                           << " Year: " << temp->getData()->getYear()
                           << " Hand: " << temp->getData()->getHand()
                           << " Volume: " << temp->getData()->getVolume()
                           << " Model: " << temp->getData()->getModel()
                           << " Country: " << temp->getData()->getCountry()
                           << " Color: " << temp->getData()->getColor()
                           << " Gear: " << temp->getData()->getgType())
            return;
        }
        temp = temp->getNext();
    } while (temp != nullptr);
    println("Sorry this car isn`t available")
}

void ManageCar::deleteAll() {
    Node *temp = new Node(*header);
    Node *temp1 = nullptr;

    while (temp != nullptr) {
        temp1 = temp->getNext();
        delete temp;
        temp = temp1;
    }
    header = nullptr;
    count=0;
}

void ManageCar::printAll() const {

    Node *temp = new Node();
    temp = header;
    if (header == nullptr) {
        println("The linked list is empty")
        return;
    }
    do {
        temp->getData()->printMyCar();
        temp = temp->getNext();
    } while (temp != nullptr);
    println("");

}
