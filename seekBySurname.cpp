#include "seekBySurname.h"

int seekBySurname(const Note* notes[], int numberOfNotes, std::string point) {
  for (int i = 0; i < numberOfNotes; ++i) {
    if ((*notes)[i].name[0] == point) {
      return i;
    }
  }
  return -1;
}