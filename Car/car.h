#pragma once
#include <cstdio>
#include <cstring>

class Car {

private:   //class 내부에서만 접근가능

protected:   //자식클래스에서 접근가능
	int speed;
	char name[40];   

public :   //외부에서도 접근가능
	int gear;
	
	Car():speed(0),gear(0),name(""){}  //생성자
	~Car(){}
	Car(int s, int g, const char* n)
		: speed(s), gear(g) {
		strcpy_s(name, n);   //문자열 n을 name에 copy(집어넣겠다 복사하겠다)
	}

	void changeGear(int g) 
	{
		gear = g;
	}
	void speedUp()
	{
		speed += 5;
	}
	void display()
	{
		printf("[%s] : 기어 %d단, 속도 %d kmph\n", name, gear, speed);
	}
	void whereAmI()
	{
		printf("객체주소 = %p\n", this);
	}
};