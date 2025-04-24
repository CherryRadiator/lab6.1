#pragma once
#include <string>

struct Note {
  std::string name[2]  = {"WithoutSurname", "WithoutName"};
  int tele = 0;
  int BDay[3] = {0, 0, 0};
};