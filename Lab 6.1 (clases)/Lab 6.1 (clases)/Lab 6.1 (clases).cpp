#include <iostream>

using namespace std;

class Libro {
private:
	string nombre;
	string autor;
	string editorial;
	string publicacion;
	double precio;
public:
	Libro(string, string, string, string, double);
	void mostrarInfo();
};

class Comic : public Libro {
public:
	Comic(string nom, string aut, string edit, string pub, double pre) : Libro(nom, aut, edit, pub, pre) {}
	void mostrarInfo();
};

class Infantil : public Libro {
public:
	Infantil(string nom, string aut, string edit, string pub, double pre) : Libro(nom, aut, edit, pub, pre) {}
	void mostrarInfo();
};

class Historia : public Libro {
public:
	Historia(string nom, string aut, string edit, string pub, double pre) : Libro(nom, aut, edit, pub, pre) {}
	void mostrarInfo();
};

Libro::Libro(string nom, string aut, string edit, string pub, double pre) {
	nombre = nom;
	autor = aut;
	editorial = edit;
	publicacion = pub;
	precio = pre;
}

void Libro::mostrarInfo() {
	cout << "Nombre del libro:" << nombre << " Autor:" << autor << " Editorial:" << editorial << " Año de publicacion:" << publicacion << " Precio:" << precio << endl;
}

void Comic::mostrarInfo() {
	Libro::mostrarInfo();
}

void Infantil::mostrarInfo() {
	Libro::mostrarInfo();
}

void Historia::mostrarInfo() {
	Libro::mostrarInfo();
}

int main() {
	Comic comic1("Spiderman La Gran Historia", "Marvel", "Libros Disney", "22 de Febrero 2023", 24.95);
	Historia historia1("Odisea", "Homero", "Austral Editorial", "4 de Mayo 2017", 12.95);
	Infantil infantil1("El principito", "Antoine de Saint-Exupery", "Zig Zag", "1943", 30);

	comic1.mostrarInfo();
	historia1.mostrarInfo();
	infantil1.mostrarInfo();
}
