#include "ManageCar.h"

int main() {
    ManageCar *a = new ManageCar();
    bool flag = true;

    println("What are you want to do?\n")
    while (flag) {
        println("");
        println("\t\2For add car press 1""\n"
                "\t\2To remove car press 2\n"
                "\t\2To print all cars between years press 3\n"
                "\t\2To print all cars in range price press 4\n"
                "\t\2To print all cars press 5\n"
                "\t\2To print a car press 6 \n"
                "\t\2To delete all the cars press 7\n"
                "\t\2To Exit press 8\n")

        int choice;
        std::cin >> choice;
        switch (choice) {
            case 1:
                a->addCar();
                break;
            case 2:
                println("Enter the number Id to remove")
                int id;
                std::cin >> id;
                a->removeCar(id);
                break;
            case 3:
                println("Enter the 2 years")
                int fromYear, toYear;
                std::cin >> fromYear >> toYear;
                a->CarsFromToYears(fromYear, toYear);
                break;
            case 4:
                println("Enter the 2 price")
                int fromPrice, toPrice;
                std::cin >> fromPrice >> toPrice;
                a->CarsFromToPrices(fromPrice, toPrice);
                break;
            case 5:
                a->printAll();
                break;
            case 6 :
                println("Enter the ID of the car")
                int i;
                std::cin >> i;
                a->printCar(i);
                break;
            case 7 :
                println("Delete all cars")
                a->deleteAll();
                break;
            case 8 :
                flag = false;
                break;
        }
    }


    return 0;
}



