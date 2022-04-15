#include <iostream> //
#include <fstream> 
#include "../library/input.h"
#include "../library/output.h"
#include "../library/proses.h"

int main(){
  Proses proses;
	proses.getData();
	proses.toFile();
	return 0;
}

int main(){
  Output output;
	output.getData();
	output.cetak();
	return 0;
}

int main(){ 
	Input input; 
	input.cetak(); 
	input.toFile(); 
	return 0;
}