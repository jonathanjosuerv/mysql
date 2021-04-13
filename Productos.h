#pragma once
class Productos :
    public Marcas
{
	//atributes:
protected: string descripcion;
		 int idproducto = 0, idmarca = 0, existencia = 0;
		 double precioCosto = 0, precioVenta = 0;

		 //constructor:
protected:
	Productos() {

	}
	Productos(string des, int idprod, int idmar, int exist, double precioC, double precioV)
	{
		descripcion = des;
		idproducto = idprod;
		idmarca = idmar;
		existencia = exist;
		precioCosto = precioC;
		precioVenta = precioV;
	}

};

