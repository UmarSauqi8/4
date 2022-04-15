using namespace std;
class Output {
public:
  void getData() {
    ambil_data.open("api_data.txt");
    while(!ambil_data.eof()){
    	ambil_data >> data_file[index];
    	index += 1;
  	}
  	ambil_data.close(); 
  }

  void cetak() {
    cout << "total pengeluaran : " << data_file[0] << endl;
    cout << "uang tabungannya saat ini : " << data_file[1] << endl;
  }

private:
  ifstream ambil_data;
  string data_file[30];
  int index = 0;
};