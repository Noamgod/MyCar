#include "Node.h"

class ManageCar {
private:

    Node *header;
    int count;

public:
    ManageCar();

    void addCar();

    void removeCar(int id);

    Node *getHeader() const;

    void  printAll() const;
    void  printCar(int id);
    void deleteAll();

    int *CarsFromToYears(int fromYear, int toYear);
    int *CarsFromToPrices(int fromPrice, int toPrice);

};

