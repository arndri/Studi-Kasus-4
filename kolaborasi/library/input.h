using namespace std;

class Input{
public:
void cetak(){
  cout<<"Masukkan Uang Pemasukkan Anda :"; cin>>uang_masuk;
  cout<<"Masukkan Jumlah Bulan : "; cin>>jml_bulan;
  }
void toFile(){
  tulis_data.open("api_data.txt");
  tulis_data<<uang_masuk<<endl;
  tulis_data<<jml_bulan;
  tulis_data.close();
}
private:
ofstream tulis_data;
int jml_bulan,uang_masuk;
};
