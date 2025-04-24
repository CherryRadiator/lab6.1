#include <iostream>
#include "note.h"
#include "getData.h"
#include "giveData.h"
#include "sort.h"
#include "seekBySurname.h"


int main() {
  int numberOfNotes = 0;
  std::cout << "Welcome to the Note Management System!" << std::endl;
  while (true) {
    std::cout << "How many notes do you want to create? ";
    std::cin >> numberOfNotes;
    if (std::cin && numberOfNotes > 0) {
      break;
    } else {
      std::cout << "Invalid input. Please enter a positive integer." << std::endl;
      std::cin.clear();
      std::cin.ignore(1000,  '\n');
    }
  }
  Note* notes = new Note[numberOfNotes];
  for (int i = 0; i < numberOfNotes; ++i) {
    std::cout << "Creating note " << (i + 1) << ":" << std::endl;
    notes[i] = getData();    
  }
  
  sort(notes, numberOfNotes);
  
  std::cout << "\nSorted Notes:\n";
  for (int i = 0; i < numberOfNotes; ++i) {
    std::cout << giveData(notes[i]) << std::endl;
  }
  
  const Note* notePointers[numberOfNotes];
  for (int i = 0; i < numberOfNotes; ++i) {
    notePointers[i] = &notes[i];
  }
  
  std::cout << "Entere surname of person you're looking for: ";
  std::string point;
  getline(std::cin, point);
  int indexOfFoundPerson = seekBySurname(notePointers, numberOfNotes, point);
  if(indexOfFoundPerson != -1) {
    std::cout << giveData(notes[indexOfFoundPerson]);
  } else {
    std::cout << "Person with this surname not found" << std::endl;
  }
  
  delete[] notes;


  return 0;
}