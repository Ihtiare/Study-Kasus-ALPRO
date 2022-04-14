#include<iostream>
#include<fstream>
#include"library/input.h"
#include"library/proses.h"
#include"library/output.h"
int main(){
  input x;
  x.coba();
  x.cetak();

  proses y;
  y.ambil();
  y.rumus();
  y.cetak();

  output z;
  z.ambil();
  z.cetak();
}