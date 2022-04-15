using namespace std;

class Proses{
  public:
  void getData(){
			ambil_data.open("api_data.txt");
			bool bln=true;
			while(!ambil_data.eof()){
				if (bln){
					ambil_data>>saku;
					bln=false;
				}
				else{
					ambil_data>>bulan;;
				}
			}
    ambil_data.close();
  }

  void toFile(){
    n=1;
    tot_keluar=0;
    tot_tabung=0;
    while(n<=bulan){
      cout<<"Masukkan Pengeluaran Bulan ke-"<<n<<": ";
      cin>>keluar;
      tabung=saku-keluar;
      tot_keluar=tot_keluar+keluar;
      tot_tabung=tot_tabung+tabung;
      n+=1;
    }
    
    tulis_data.open("api_data.txt");
    tulis_data<<tot_keluar<<endl;
    tulis_data<<tot_tabung;
    tulis_data.close();
  }
  private:
  ofstream tulis_data;
  ifstream ambil_data;
  int tabung,saku,bulan,keluar,n,tot_keluar,tot_tabung;
};