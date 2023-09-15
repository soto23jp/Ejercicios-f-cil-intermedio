#include <iostream>

int main() {
    double cantidad_pies, cantidad_metros;
    
    // Lee las cantidades en pies y metros
    std::cout << "Ingresa la cantidad en pies: ";
    std::cin >> cantidad_pies;
    std::cout << "Ingresa la cantidad en metros: ";
    std::cin >> cantidad_metros;
    
    // Realiza las conversiones
    double suma_pulgadas = cantidad_pies * 12 + cantidad_metros / 0.0254;
    double suma_yardas = cantidad_pies / 3 + cantidad_metros / 0.9144;
    double suma_metros = cantidad_pies * 0.3048 + cantidad_metros;
    double suma_millas = (cantidad_pies * 12 + cantidad_metros / 0.0254) / 1609.0;

    // Muestra los resultados
    std::cout << "Suma en pulgadas: " << suma_pulgadas << " pulgadas" << std::endl;
    std::cout << "Suma en yardas: " << suma_yardas << " yardas" << std::endl;
    std::cout << "Suma en metros: " << suma_metros << " metros" << std::endl;
    std::cout << "Suma en millas: " << suma_millas << " millas" << std::endl;

    return 0;
}