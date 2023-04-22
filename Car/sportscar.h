#pragma once
#include "car.h"

class SportsCar : public Car
{
public:
	bool bTurbo;
	SportsCar(){}   //생성자
	~SportsCar(){}   //소멸자
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo)
			speed += 20;
		else
			Car::speedUp(); //터보모드 아니면 카 클래스의 speedup함수 사용
	}
};