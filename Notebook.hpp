#pragma one
#include "Direction.hpp"
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

namespace ariel {
    class Notebook 
    {

        public:
            void write(int, int, int, Direction, string);
            string read(int, int, int, Direction, int);
            void erase(int, int, int, Direction, int);
            void show(int);
    };
}