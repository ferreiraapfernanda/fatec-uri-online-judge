//1002	Área do Círculo
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double Area, Raio;
   cin >> Raio;
   Area = 3.14159 * Raio * Raio;
   cout << fixed << setprecision(4);
   cout << "A=" << Area << endl;
   return 0;
}
