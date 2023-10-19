#include <iostream> /// расчет времени падения
double calculateFallTime(double height) { 
    const double g = 9.8; // Ускорение свободного падения на Земле (м/с^2) 
    double time = sqrt((2 * height) / g); // Формула времени падения 
 
    return time;
  
} 