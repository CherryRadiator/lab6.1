#include "giveData.h"
#include "note.h"

std::string giveData(Note note) {
  std::string data = "Name: " + note.name[0] + "Surname: " + note.name[1] + ", Phone: " + std::to_string(note.tele) + ", Birthday: " + std::to_string(note.BDay[0]) + "/" + std::to_string(note.BDay[1]) + "/" + std::to_string(note.BDay[2]);
  return data;
}