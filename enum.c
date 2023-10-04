//C enum-->An enum is a special type that represents a group of constants (unchangeable values)
enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};

// enum in switch statement 
enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      printf("Low Level");
      break;
    case 2:
      printf("Medium level");
      break;
    case 3:
      printf("High level");
      break;
  }
  return 0;
}
