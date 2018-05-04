
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char * argv[]){

for(int i = 1; i < argc; i++){
	
	string line;
	ifstream file (argv[i]);	
	if (file.is_open() == 1){ 	
		while ( file.good() ){
			getline (file, line);
			cout << line << endl; 
			}
		file.close();
	}
	else if (!file)
		cout << "Couldn't open this file:"<< argv[i]<<endl;
}
return 0;
}

