#include "Notebook.hpp"

namespace ariel {
    void Notebook::write(int page, int row, int col, Direction, string) {
        if(page<0 || row<0 || col<0){
            __throw_invalid_argument("invalid argument.");
        }
    }

   void Notebook::erase(int page, int row, int col, Direction, int num) {
        if(page < 0 || row < 0 || col < 0 || num <= 0){
            __throw_invalid_argument("invalid argument");
        }
    }

    string Notebook::read(int page, int row, int col, Direction, int num) {
        if(page<0 || row<0 || col<0 || num<= 0){
            __throw_invalid_argument("invalid argument");
        }
        return "";
    }
    void Notebook::show(int page) {}
}




