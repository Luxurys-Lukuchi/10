/// программа расчивает время падения с определной высоты
#include <iostream> 
#define NDEBUG
#include <cmath>
#include <cassert>  
#include "10.h" 
#include "fall.cpp" 
 const float eps =10e-3;

int main() { 
	assert(fabs(calculateFallTime(3) - 0.78) < eps);/// если ответ равен 0.78 верно
	assert(fabs(calculateFallTime(4) - 0.90) < eps);/// если ответ равен 0.90 верно
	assert(fabs(calculateFallTime(5) - 1.01) < eps);/// если ответ равен 1.01 ошибка
    double height; 
 
    std::cout << "Введите высоту (в метрах): "; 
    std::cin >> height; 
 
    double fallTime = calculateFallTime(height); 
 
    std::cout << "Время падения камня: " << fallTime << " секунд" << std::endl; 
 
    return 0; 
} 