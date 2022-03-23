#include "doctest.h"
#include "Direction.hpp"
#include "Notebook.hpp"
#include <string>
using namespace ariel;
using namespace std;

Notebook notebook;

TEST_CASE("Bad inputs"){
   Notebook notebook;



  CHECK_THROWS(notebook.write(-1, 0, 0, ariel::Direction::Vertical, "test"));
  CHECK_THROWS(notebook.write(0, -2, 0, ariel::Direction::Vertical, "test"));
  CHECK_THROWS(notebook.write(-32, 0, -1, ariel::Direction::Vertical, "test"));

  CHECK_THROWS(notebook.write(-2, 0, 0, ariel::Direction::Horizontal, "test"));
  CHECK_THROWS(notebook.write(0, -5, 0, ariel::Direction::Horizontal, "test"));
  CHECK_THROWS(notebook.write(0, 0, -1, ariel::Direction::Horizontal, "test"));

  CHECK_THROWS(notebook.read(-65, 0, 0, ariel::Direction::Horizontal, 1));
  CHECK_THROWS(notebook.read(0, -32, 0, ariel::Direction::Horizontal, 1));
  CHECK_THROWS(notebook.read(0, 0, -1, ariel::Direction::Horizontal, 1));

  CHECK_THROWS(notebook.read(1, -32, 1, ariel::Direction::Horizontal, 0));
  CHECK_THROWS(notebook.read(1, -12, 1, ariel::Direction::Horizontal, -1));


  CHECK_THROWS(notebook.read(-321, 0, 0, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.read(0, -321, 0, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.read(0, 0, -1, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.read(1, -1, 1, ariel::Direction::Vertical, 0));
  CHECK_THROWS(notebook.read(1, -23, 1, ariel::Direction::Vertical, -1));
 
  CHECK_THROWS(notebook.erase(-1, 0, 0, ariel::Direction::Horizontal, 1));
  CHECK_THROWS(notebook.erase(-4, -1, 0, ariel::Direction::Horizontal, 1));
  CHECK_THROWS(notebook.erase(-10, 0, -1, ariel::Direction::Horizontal, 1));

  CHECK_THROWS(notebook.erase(1, 1, 1, ariel::Direction::Horizontal, 0));
  CHECK_THROWS(notebook.erase(1, 1, 1, ariel::Direction::Horizontal, -1));

  CHECK_THROWS(notebook.erase(-1, -1, 0, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.erase(-1, -1, -1, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.erase(0, 0, -1, ariel::Direction::Vertical, 1));
  CHECK_THROWS(notebook.erase(1, 1, 1, ariel::Direction::Vertical, 0));
  CHECK_THROWS(notebook.erase(1, 1, 1, ariel::Direction::Vertical, -1));
}