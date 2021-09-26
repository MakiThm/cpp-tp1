#include <iostream>

int main()
{
  char s[] = "verte";
  char *p = s;
  std::cout << *p++; 
  std::cout << "\n";
  std::cout << *(p++);
  std::cout << "\n";
  std::cout << (*p)++; 
  std::cout << "\n";
  std::cout << *++p; //r transformed into s (bc of ASCII)
  std::cout << "\n";
  std::cout << *(p+1);
  std::cout << "\n";
  std::cout << " " << s;
  std::cout << "\n";
  std::cout << s;
  return 0;
}
