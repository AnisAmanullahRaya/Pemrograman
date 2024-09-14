
#include <iostream>
#include <string>
using namespace std;

int main() {
    double celsius;
    std::cout << "Masukkan suhu dalam Celcius: ";
    std::cin >> celsius;
    
    int choice;
    
    std::cout << "Ingin diubah ke satuan:" << endl;
    std::cout << "\n" << "1. Fahrenheit" << endl;
    std::cout << "2. Kelvin" << endl;
    std::cout << "3. Reamur" << endl;
    std::cout << "\n" << "Masukkan pilihan (1/2/3): ";
    std::cin >> choice;
    
    if (choice == 1) {
        // celcius ke fahrenheit
        double fahrenheit = (celsius * 9 / 5) + 32;
        std::cout << celsius << " derajat Celcius setara dengan " << fahrenheit << " derajat Fahrenheit." << std::endl;
    } else if (choice == 2) {
        // Celcius ke kelvin
        double kelvin = celsius + 273.15;
        std::cout << celsius << " derajat Celcius setara dengan " << kelvin << " Kelvin." << std::endl;
    } else if (choice == 3) {
        // celcius ke reamur
        double reamur = celsius * 4 / 5;
        std::cout << celsius << " derajat Celcius setara dengan " << reamur << " derajat Reamur." << std::endl;
    } else {
        std::cout << "Pilihan tidak bisa di jalankan, mohon ulangi dan memilih salah satu dari 1/2/3." << std::endl;
        // kalo salah milih
    }
    
    return 0;
}