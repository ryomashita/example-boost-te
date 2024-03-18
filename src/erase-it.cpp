#include <boost/te.hpp>
#include <iosfwd>
namespace te = boost::te;

// Define interface of somthing which is drawable
struct Drawable {
  void draw(std::ostream& out) const {
    te::call([](auto const& self, auto& out) { self.draw(out); }, *this, out);
  }
};

// Define implementation which is drawable (No inheritance)
struct Square {
  void draw(std::ostream& out) const { out << "Square"; }
};
struct Circle {
  void draw(std::ostream& out) const { out << "Circle"; }
};
