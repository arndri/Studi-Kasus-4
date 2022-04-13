using namespace std;

class output {
  public : 
    void cetak (){
      cout<<endl;
      cout<<"Pengeluaran tiap bulan : "<<data_file[0]<<endl;
      cout<<"Total Pengeluaran      : "<<data_file[1]<<endl;
      cout<<"Sisa uang tabungan     : "<<data_file[2]<<endl;
      
    }

    void getData() {
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data>>data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

  private : 
    ifstream ambil_data;
    string data_file[10];
    int index = 0;
};