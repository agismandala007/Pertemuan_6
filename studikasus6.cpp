#include <iostream> 
using namespace std;

class Dosen {
  public:
    void input();
    void proses();
    void output();
 
  
  private:
    int min=0, max=0, rata=0, nilai[7];
    string nama="Wahyu Pujiyono", matkul="Alpro", namaMhs[7] = {"Asep","Udin","Tegar","Siti","Dedi","Jingga","Zidan"};
};

void Dosen::input(){
  cout<<"+----------------------+"<<endl;
  cout<<"| Data nilai Mahasiswa |"<<endl;
  cout<<"+----------------------+"<<endl;
  cout<<" Nama Dosen  : "<<nama<<endl;
  cout<<" Mata kuliah : "<<matkul<<endl;
  cout<<"+--------------------------+"<<endl;
  cout<<"|  Input Nilai Matakuliah  |"<<endl;
  cout<<"+--------------------------+"<<endl;
  for(int i=0; i<7; i++){
    cout<<" - Nama Mahasiswa : "<<namaMhs[i]<<endl;
    cout<<"   Nilai          : ";cin>>nilai[i];
  }
  cout<<"+--------------------------+"<<endl<<endl;
}

void Dosen::proses(){
  //nilai min
  min=nilai[0];
  for(int i=1; i<7; i++){
    if(min>nilai[i]){
      min=nilai[i];
    }
  }
  //nilai max
  max=nilai[0];
  for(int i=1; i<7; i++){
    if(max<nilai[i]){
      max=nilai[i];
    }
  }
  //nilai rata-rata
  for(int i=0; i<7; i++){
    rata+=nilai[i];
  }
  rata/=7;
}

void Dosen::output(){
  cout<<"+----------------------+"<<endl;
  cout<<"| Data nilai Mahasiswa |"<<endl;
  cout<<"+----------------------+"<<endl;
  cout<<" Nama Dosen  : "<<nama<<endl;
  cout<<" Mata kuliah : "<<matkul<<endl;
  cout<<"+--------------------------+"<<endl;
  cout<<"|  Input Nilai Matakuliah  |"<<endl;
  cout<<"+--------------------------+"<<endl;
  cout<<"| Nama       | Nilai       |"<<endl;
  cout<<"+--------------------------+"<<endl;
  for(int i=0; i<7; i++){
    cout<<"| - "<<namaMhs[i]<<"      | "<<nilai[i]<<"          |"<<endl;
  }
  cout<<"+--------------------------+"<<endl;
  cout<<"| Nilai Min    | "<<min<<endl;
  cout<<"| Nilai Max    | "<<max<<endl;
  cout<<"| Nilai Rata   | "<<rata<<endl;
  cout<<"+--------------------------+"<<endl;
}

int main() {
  Dosen x;
  x.input();
  x.proses();
  x.output();
}
