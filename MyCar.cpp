#include "MyCar.h"

int MyCar::getId() const {
    return id;
}

int MyCar::getPrice() const {
    return price;
}

int MyCar::getYear() const {
    return year;
}

int MyCar::getVolume() const {
    return volume;
}

int MyCar::getHand() const {
    return hand;
}

void MyCar::setId(int id) {
    this->id = id;
}

void MyCar::setPrice(int price) {
    if (price > 0) {
        {
            this->price = price;
        }
    }
}


MyCar::MyCar(int id,int price, int year, int volume, int hand, char *model, char *color, char *country, char *gType) :
        price(price),
        year(year),
        volume(volume),
        hand(hand),
        model(model),
        color(color),
        country(country),
        gType(gType) {}

void MyCar::printMyCar() const {
    println("Id: " << id
                   << " Price: " << price
                   << " Year: " << year
                   << " Hand: " << hand
                   << " Volume: " << volume
                   << " Model: " << model
                   << " Country: " << country
                   << " Color: " << color
                   << " Gear: " << gType
    );

}

void MyCar::setYear(int year) {
    this->year = year;
}

void MyCar::setVolume(int volume) {
    this->volume = volume;
}

void MyCar::setHand(int hand) {
    this->hand = hand;
}

const bool MyCar::compare(const MyCar &car) const {
    if (this->year < car.year) return true;
    return false;
}

MyCar *MyCar::creat() {
    MyCar *car = new MyCar();
    println("Enter please: id, price, year, volume motor ,hand ,model ,color ,country factory, gear Type (0= AUTO 1 = MANUAL)")
    std::cin >> car->id;
    std::cin >> car->price;
    std::cin >> car->year;
    std::cin >> car->volume;
    std::cin >> car->hand;
    std::cin >> car->model;
    std::cin >> car->color;
    std::cin >> car->country;
    std::cin >> car->gType;

    return car;
}

MyCar::MyCar() {

}

char *MyCar::getModel() const {
    return model;
}

char *MyCar::getColor() const {
    return color;
}

char *MyCar::getCountry() const {
    return country;
}


MyCar::~MyCar() {
    delete[] model;
    delete[] color;
    delete[] country;
    delete[] gType;
}

char *MyCar::getgType() const {
    return gType;
}


