#pragma once
#include <iostream>
using namespace std;
class Producto
{
	//atributes:
protected: string descripcion;
	int idproducto=0, idmarca=0, existencia=0;
		 double precioCosto=0, precioVenta=0;
	
	//constructor:
protected:
	Producto() {
		
	}
	Producto(string des, int idprod, int idmar, int exist, double precioC, double precioV)
	{
		descripcion = des;
		idproducto = idprod;
		idmarca = idmar;
		existencia = exist;
		precioCosto = precioC;
		precioVenta = precioV;
	}

};



