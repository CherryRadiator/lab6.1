#include "sort.h"

void sort(Note* notes, int numberOfNotes) {
  int left, right;
  for (int i = 0; i < numberOfNotes - 1; ++i) {
    for (int j = 0; j < numberOfNotes - i - 1; ++j) {

      left = notes[j].tele;
      right = notes[j + 1].tele;
      
      while (left > 1000) { left /= 10; }
      while (right > 1000) { right /= 10; }
      
      if (left > right) {
                Note temp = notes[j];
                notes[j] = notes[j + 1];
                notes[j + 1] = temp;
            }
        }
    }
}