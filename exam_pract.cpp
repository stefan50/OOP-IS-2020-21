#include <iostream>
#include <cstring>

using namespace std;

class Weapon {
private:
    char type[20];
    int durability;
    char name[20];
    char code[20];
    double area_radius;
public:
    void initialize(const char* _type, int _durability, const char* _name, const char* _code, double _area_radius) {
        strcpy(type, _type);
        durability = _durability;
        strcpy(name, _name);
        strcpy(code, _code);
        area_radius = _area_radius;
    }

    bool is_in_range(double radius) {
        return area_radius >= radius;
    }

    void use(int lost_durability) {
        durability -= lost_durability;
        if (durability <= 0) {
            std::cout << "Weapon " << name << " broke";
            // discard object
        }
    }

    Weapon() {

    }

    Weapon(const Weapon& other) {
        strcpy(type, other.type);
        durability = other.durability;
        strcpy(name, other.name);
        strcpy(code, other.code);
        area_radius = other.area_radius;
    }

    Weapon operator+(const Weapon& other) {
        if(!strcmp(type, other.type) && area_radius == other.area_radius) {
            Weapon result;
            char _name[20];
            strcpy(_name, name);
            strcat(_name, other.name);
            // generate new code (pseudo-randomly)
            char _code[20];
            strcpy(_code, code);
            result.initialize(type, durability + other.durability, _name, _code, area_radius);
            return result;
        }
    }
};

int main() {

    return 0;
}