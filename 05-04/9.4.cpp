#include <iostream>

using namespace std;

struct Date{
	int ev;
	int honap;
	int nap;
};
Date datum[100];

void write(int db){
	
	for(int j=0; j<db; j++){
		cout << datum[j].ev << " " << datum[j].honap << " " << datum[j].nap << endl;
		
	}
	cout << endl;
}

void read(int db){
	
	for (int i=0; i<db; i++)
	{
		cin >> datum[i].ev;
		cin >> datum[i].honap;
		cin >> datum[i].nap;
	}
write(db);
}


void init(Date &datum){
	datum.ev = 2018;
	datum.honap = 05;
	datum.nap = 04;
	cout<< endl << datum.ev << " " << datum.honap << " " << datum.nap << endl;
}


int main(){
int db;
cout << "Adja meg a beolvasando elemek szamat: "; cin >> db;
read(db);
cout <<endl<< "Inicializalas:";
init(datum[0]);

return 0;

}

