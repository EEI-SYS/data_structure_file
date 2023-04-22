#pragma once
#include <cstring>

class Birthday
{
public:
	int month;
	int date;

};

class Student 
{
public:
	char name[100];
	Birthday bDay;  //다른 클래스(birthday)를 멤버변수로 사용한다 

};