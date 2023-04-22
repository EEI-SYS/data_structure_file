#pragma once
#include <cstdio>
#include <cstring>

class Car {

private:   //class ���ο����� ���ٰ���

protected:   //�ڽ�Ŭ�������� ���ٰ���
	int speed;
	char name[40];   

public :   //�ܺο����� ���ٰ���
	int gear;
	
	Car():speed(0),gear(0),name(""){}  //������
	~Car(){}
	Car(int s, int g, const char* n)
		: speed(s), gear(g) {
		strcpy_s(name, n);   //���ڿ� n�� name�� copy(����ְڴ� �����ϰڴ�)
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
		printf("[%s] : ��� %d��, �ӵ� %d kmph\n", name, gear, speed);
	}
	void whereAmI()
	{
		printf("��ü�ּ� = %p\n", this);
	}
};