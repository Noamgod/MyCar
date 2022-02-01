#define println(x) std::cout<<x<<std::endl;
#define print(x) std::cout<<x;
#include "iostream"

class MyCar {

private:
    int id, price, year, volume, hand;
    char *model = new char[10];
    char *color = new char[8];
    char *country = new char[10];
    char *gType = new char [2]; // 0= AUTO 1 = MANUAL


public:
    MyCar *creat();

    MyCar();
    ~MyCar();

    MyCar(int id ,int price, int year, int volume, int hand, char *model, char *color, char *country, char * gType );

    const bool compare(const MyCar &car) const;

    void setId(int id);

    void setPrice(int price);

    void setYear(int year);

    void setVolume(int volume);

    void setHand(int hand);

    int getId() const;

    int getPrice() const;

    int getYear() const;

    int getVolume() const;

    int getHand() const;

    char *getModel() const;

    char *getColor() const;

    char *getCountry() const;
    char *getgType() const;

    void printMyCar() const;


};
