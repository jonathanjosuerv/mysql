#pragma once
#include <iostream>
using namespace std;

class Marca
{
	//atributes:
protected: int idmarca;
		 string marca;

	//constructor:
protected:
	Marca() {

	}
	Marca(int idM, string marc ) {
		idmarca = idM;
		marca = marc;
	}
};

