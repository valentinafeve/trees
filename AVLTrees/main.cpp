#include "ATree.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(int argc, char* argv[]){
	//Creamos el árbol dándole el valor a la raíz.
	
	ifstream reader;
	reader.open(argv[1]);
	string line;
	string act="";


	if(!reader.is_open()){
		printf("Ocurrió un error al leer el archivo.\n");
		return -1;
	}
	getline(reader,line,' ');
	getline(reader,line);
	int m=atoi( line.c_str() );
	ATree<int> mytree( m );
	printf("Creando árbol con raíz %d\n",m);
	printf("Leyendo archivo...\n");
	while(!reader.eof()){
		getline(reader,line,' ');
		act=line;
		if(line.compare("del")!=0){
			getline(reader,line);
			printf("Agregando %s\n",line.c_str());
			m=atoi( line.c_str() );
			mytree.insertdata( m );

		}
		else{
			if(line.compare("add")!=0){
				getline(reader,line);		
				printf("Eliminando %s\n",line.c_str());
				m=atoi( line.c_str() );
				mytree.deletedata( m );
			}
		}
	}

	mytree.preorder();

	reader.close();
	return 0;
}