/*Desenvolva a classe Termometro com o atributo privado temperaturaCelsius (iniciado em 25.0 
pelo construtor) e um setter que bloqueie valores abaixo de -273.15. Adicione os métodos 
públicos getTemperaturaCelsius e getTemperaturaFahrenheit, sendo que o segundo deve 
calcular a conversão sem usar um novo atributo.*/

#include <iostream>

class Termometro {
private:
    double temperaturaCelsius;

public:
    // Construtor inicia em 25.0
    Termometro() {
        temperaturaCelsius = 25.0;
    }

    // Setter que bloqueia valores abaixo do zero absoluto (-273.15°C)
    void setTemperaturaCelsius(double t) {
        if (t >= -273.15) {
            temperaturaCelsius = t;
        } else {
            std::cout << "Erro: Temperatura abaixo do zero absoluto não é permitida!\n";
        }
    }

    // Getter para Celsius
    double getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    // Getter para Fahrenheit (calcula o valor na hora)
    double getTemperaturaFahrenheit() {
        return (temperaturaCelsius * 1.8) + 32.0;
    }
};