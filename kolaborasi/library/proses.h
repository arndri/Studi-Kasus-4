using namespace std;

class Proses{
public:
 void baca(){
   ambil_data.open("api_data.txt");
    bool uangsaku=true;
    while(!ambil_data.eof()){
      if(uangsaku){
        ambil_data>>uang;
        uangsaku=false;
      }
      else{
        ambil_data>>bulan;
        }
    }
     ambil_data.close();
   cout<<"Uang Saku Anda  : "<<uang<<endl;
  cout<<"Uang Saku untuk "<<bulan<<" bulan"<<endl;
 }


void kebutuhan(){
  for(int i=1;i<=bulan;i++){
    cout<<"Masukkan Pengeluaran Bulan Ke-"<<i<<"  : ";cin>>pengeluaran;
    total_pengeluaran+=pengeluaran;
    sisa=uang;
    sisa-=pengeluaran;
    cout<<"Sisa Uang Saku Bulan Ke-"<<i<<"  : "<<sisa<<endl;
  }
  tabungan=sisa;
  total=total_pengeluaran;
  rata=(float)total/bulan;
}

void tulis(){
  tulis_data.open("api_data.txt");
  tulis_data<<rata<<endl;
  tulis_data<<total<<endl;
  tulis_data<<tabungan;
  tulis_data.close();
}

private:
ifstream ambil_data;
ofstream tulis_data;

int uang,bulan;
int pengeluaran,total_pengeluaran,tabungan,sisa,total;
float rata;
};