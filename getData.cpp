#include <iostream>
#include "note.h"

Note getData () {
  Note note;

  std::cout << "Enter surname: ";
  std::cin.ignore(); 
  std::getline(std::cin, note.name[0]);
  std::cout << "Enter name: ";
  std::getline(std::cin, note.name[1]);

  while (true) {
    std::cout << "Enter phone number (at least 3 digits): ";
    std::cin >> note.tele;
    if (note.tele > 100) {
      break;
    } else {
      std::cout << "Invalid input for phone number. Please enter a valid integer." << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
    }
  }

  while (true) {
    std::cout << "Enter birth date (mm dd yyyy): ";
    std::cin >> note.BDay[0];
    if (std::cin && note.BDay[0] >= 1 && note.BDay[0] <= 12) {
      break;
    } else {
      std::cout << "Invalid input for month. Please enter a valid integer between 1 and 12." << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
    }
  }

  while (true) {
    std::cin >> note.BDay[1];
    if (std::cin && note.BDay[1] >= 1 && ((note.BDay[0] == 2 && note.BDay[1] <= 29) || (note.BDay[0] != 2 && note.BDay[1] <= 31))) {
      break;
    } else {
      std::cout << "Invalid input for day. Please enter a valid integer between 1 and 31." << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
    }
  }

  while (true) {
    std::cin >> note.BDay[2];
    if (std::cin && note.BDay[2] >= 1900 && note.BDay[2] <= 2024) {
      break;
    } else {
      std::cout << "Invalid input for year. Please enter a valid integer between 1900 and 2024." << std::endl;
      std::cin.clear();
      std::cin.ignore(1000, '\n');
    }
  }

  std::cout << "Note created successfully!" << std::endl;
  return note;
}