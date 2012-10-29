#ifndef TOLERANCE_H
#define TOLERANCE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

float SELECTVAL(int num)
{
  //Using IT01.txt for testing purposes only
  ifstream db("IT01.txt");

  string file_line;
  int fn, ln;
  float tol;
  char dash[2];

  float RES;

  if(db.is_open()){
    while(db.good()){
      getline(db, file_line);

      istringstream line(file_line);
      line >> fn >> dash[0] >> ln >> dash[1] >> tol;

      if(num >= fn && num < ln){
        RES = tol; db.close();
      }
  } db.close(); }

  return RES;
}

#endif
