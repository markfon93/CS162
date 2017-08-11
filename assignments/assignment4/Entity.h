#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <iostream>
#include <fstream>

class Entity {
	protected:
		char id;

	public:
		Entity();
		char getId();
};

#endif
