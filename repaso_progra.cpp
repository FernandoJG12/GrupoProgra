#include <iostream>
#include <string>

using namespace std; 
class Libro {
private:
	string genero;
	int autor;

public:
	Libro(string _genero, int _autor) {
		genero = _genero;
		autor = _autor;
	}

	void mostrarDatos() {
		cout << "Genero: " << genero << ", Autor: " << autor << endl;
	}
};

class LibroRomance : public Libro {
private:
	string tapa;

public:
	LibroRomance(string _genero, int _autor, string _tapa) :
		Libro(_genero, _autor) {
		tapa = _tapa;
	}

	void mostrarTipoTapa() {
		mostrarDatos();
		cout << "Tipo de Tapa: " << tapa << endl;
	}

	int main() {
		string genero, tapa;
		int autor;

		cout << "Ingrese el genero del libro: ";
		cin >> genero;
		cout << "Ingrese el autor del libro: ";
		cin >> autor;
		cout << "Ingrese el tipo de tapa del libro: ";
		cin >> tapa;

		Libro miLibro(genero, autor, tapa);

		miLibro.mostrarTipoTapa();

		return 0;
	}
};
