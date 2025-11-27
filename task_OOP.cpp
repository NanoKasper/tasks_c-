
#include <iostream>
#include <string>

class Car {
    private:
        double weight;
        double length;
        double width;
        double height;
        int horsepower;
        std::string engineType;

    public:
        Car(double w, double len, double wid, double h, int hp, std::string engType) 
        : weight(w), length(len), width(wid), height(h), horsepower(hp), engineType(engType) {}

        virtual void displayInfo() const {
        std::cout << "Weight: " << weight << " kg\n";
        std::cout << "Length: " << length << " x " << width << " x " << height << " m\n";
        std::cout << "Horse Power: " << horsepower << " h.p.\n";
        std::cout << "Engine Type: " << engineType << "\n";
    }

    virtual ~Car() = default;

};


class TeslaCar : public Car {
    private:
        int numPanels;
        std::string manufactur;
        std::string country;

    public:
    TeslaCar(double w, double len, double wid, double h, int hp, 
             int numPanels, std::string manuf, std::string cntry)
        : Car(w, len, wid, h, hp, "Electro"), 
          numPanels(numPanels), manufactur(manuf), country(cntry) {}
    
        void displayInfo() const override {
            Car::displayInfo();
            std::cout << "amount of solar panels: " << numPanels << "\n";
            std::cout << "Manufacturer: " << manufactur << "\n";
            std::cout << "Country: " << country << "\n";
    }

};


class GazolineCar : public Car {
    private:
        int octaneNumber;
        std::string manufactur;
        std::string country;
        std::string stateNum;

    public:
    GazolineCar(double w, double len, double wid, double h, int hp,
                int octane, std::string manuf, std::string cntry, std::string stateNum)
        : Car(w, len, wid, h, hp, "Gazoline"),
          octaneNumber(octane), manufactur(manuf), country(cntry), stateNum(stateNum) {}
    
        void displayInfo() const override {
            Car::displayInfo();
            std::cout << "octane number: " << octaneNumber << "\n";
            std::cout << "manufacturer: " << manufactur << "\n";
            std::cout << "country: " << country << "\n";
            std::cout << "state number: " << stateNum << "\n";
    }

};


int main() {
    TeslaCar tesla(1800, 4.7, 1.97, 1.44, 670, 10, "Tesla", "USA");
    GazolineCar toyota(1450, 4.22, 1.82, 1.5, 150, 95, "Toyota", "Japan", "A123BC");

    std::cout << "=== TeslaCar ===\n";
    tesla.displayInfo();

    std::cout << "\n=== GazolineCar ===\n";
    toyota.displayInfo();

    return 0;
}
