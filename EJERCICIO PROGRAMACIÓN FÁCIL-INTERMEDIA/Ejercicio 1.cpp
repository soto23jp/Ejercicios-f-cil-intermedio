#include <iostream>

int main() {
    int minutos1, segundos1, minutos2, segundos2;

    // Lee los tiempos del primer atleta
    std::cout << "Tiempo del primer atleta (minutos segundos): ";
    std::cin >> minutos1 >> segundos1;

    // Lee los tiempos del segundo atleta
    std::cout << "Tiempo del segundo atleta (minutos segundos): ";
    std::cin >> minutos2 >> segundos2;

    // Suma los tiempos de ambos atletas en segundos
    int tiempoTotalSegundos = (minutos1 + minutos2) * 60 + segundos1 + segundos2;

    // Calcula las horas, minutos y segundos
    int horas = tiempoTotalSegundos / 3600;
    int minutos = (tiempoTotalSegundos % 3600) / 60;
    int segundos = tiempoTotalSegundos % 60;

    // Muestra el tiempo total en horas, minutos y segundos
    std::cout << "Tiempo total: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos" << std::endl;

    return 0;
}
