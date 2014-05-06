#ifndef Province_H
#define Province_H

#include "Vector2.h"
#include <unordered_map>
class Person;

class Province
{

public:
	Province(Vector2* myP0,Vector2* myP1,Vector2* myP2,Vector2* myP3, int myArability)
	{
		p0 = myP0;
		p1 = myP1;
		p2 = myP2;
		p3 = myP3;
		arability = myArability;
	};

	Vector2 getCenter()
	{
		return Vector2((p0->x+p1->x+p2->x+p3->x)/4,(p0->y+p1->y+p2->y+p3->y)/4);
	};

	Vector2* p0;
	Vector2* p1;
	Vector2* p2;
	Vector2* p3;

	int altitude;
	int arability;//100 is fully vegetable
	int food_produced;

	std::unordered_map<int,Person*> people_on_province;
	std::unordered_map<int,House*> homes_on_province;
};

#endif