#include "tolerance.h"

int main(int argc, char** argv)
{
  int num; cout <<"Diametri:"; cin >> num;
  int grade; cout << "Grada:"; cin >> grade;
  cout << SELECTVAL(num,grade) << endl;
}
