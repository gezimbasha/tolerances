#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string fname; double num[25];

  cout << "Write filename:"; getline(cin,fname);
  ofstream filename;

  for(int i=1; i<=21; i++){
    cout << i << ": ";
    cin >> num[i];
  }

  filename.open(fname.c_str());
  if(filename.is_open()){
  filename << "0-3:";filename << num[1];
  filename << "\n3-6:";filename << num[2];
  filename << "\n6-10:";filename << num[3];
  filename << "\n10-18:";filename << num[4];
  filename << "\n18-30:";filename << num[5];
  filename << "\n30-50:";filename << num[6];
  filename << "\n50-80:";filename << num[7];
  filename << "\n80-120:";filename << num[8];
  filename << "\n120-180:";filename << num[9];
  filename << "\n180-250:";filename << num[10];
  filename << "\n250-315:";filename << num[11];
  filename << "\n315-400:";filename << num[12];
  filename << "\n400-500:";filename << num[13];
  filename << "\n500-630:";filename << num[14];
  filename << "\n630-800:";filename << num[15];
  filename << "\n800-1000:";filename << num[16];
  filename << "\n1000-1250:";filename << num[17];
  filename << "\n1250-1600:";filename << num[18];
  filename << "\n1600-2000:";filename << num[19];
  filename << "\n2000-2500:";filename << num[20];
  filename << "\n2500-3150:";filename << num[21];
  filename.close();
  }

  return 0; 
}
