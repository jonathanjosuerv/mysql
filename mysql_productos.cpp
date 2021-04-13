

#include <mysql.h>
#include <iostream>
using namespace std;
int q_estado;

int main()
{
     
    MYSQL* conectar;
    MYSQL_ROW fila;
    MYSQL_RES* resultado;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "jonathan10", "db_productos", 3306, NULL, 0);

    if (conectar) {
        cout << "Conexion exitosa!..." << endl;
        cout << " " << endl;
        cout << "..." << endl;
        cout << "***I N G R E S O   D E    M A R C A S***" << endl;
        cout << "Ingrese nombre de la marca: " << endl;
        string marca;
        cin>>marca;
        string insert = "insert into marcas(marca) values ('" + marca + "')";
        const char* i = insert.c_str();
        q_estado = mysql_query(conectar, i);
        if (!q_estado) {
            cout << "Valor:" <<marca<<" Ingresado exitosamente" << endl;
        }
        else {
            cout << "Error al ingresar" << endl;
        }
    
        string consulta = "select * from marcas";
        const char* c = consulta.c_str();
        q_estado = mysql_query(conectar, c);
        if (!q_estado) {
            resultado = mysql_store_result(conectar);
            cout << " M O S T R A N D O   R E G I S T R O S :" << endl;
            while (fila = mysql_fetch_row(resultado)) {
      
                cout << fila[0] << ", " << fila[1] << endl;
            }

            cout << "** I N G R E S O  D E  P R O D U C T O S ***" << endl;
            cout << "Ingtrdr "
        }

        else {
            cout << "x x x Error al consultar x x x" << endl;
        }




   }
    else {
        cout << "Error en la conexion!..." << endl;
    }

    system("pause");
    return 0;
}

