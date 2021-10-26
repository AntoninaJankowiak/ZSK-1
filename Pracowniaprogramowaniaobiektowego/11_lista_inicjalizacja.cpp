#include <iostream>

using namespace std;

class Worker{
		const int id=0;
		string name, surname;
	public:
		Worker();
		Worker(int pId, string pName, string pSurname);
		void getData();
		
};

Worker::Worker():
	id {-1},
	name{"IMI� DOMYLNE"},
	surname{"NAZWISKO DOMY�LNE"}
{
	cout<<"Konstruktor domy�lny";
}

Worker::Worker(int pId, string pName, string pSurname):
	id {pId},
	name{pName},
	surname{pSurname}
{
	cout<<"Konstruktor domy�lny";
}
void Worker::getData(){
	
	cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl 
		 << "                 Dane                " << endl << endl
		 << "Id: " << id << endl
		 << "Imie: " << name << endl
		 << "Nazwisko: " << surname << endl
		 << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
	
}


int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker nowak;
	nowak.getData();
	Worker kowalski (10, "Jerzy", "Sabiniewicz");
	kowalski.getData();
	return 0;
}
