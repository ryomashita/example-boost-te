#ifndef SRC_ERASE_IT_H
#define SRC_ERASE_IT_H

#include <boost/te.hpp>
#include <iosfwd>
namespace te = boost::te;

namespace tesample {
// Define interface of somthing which is drawable
struct Drawable : te::poly<Drawable> {
 public:
  using te::poly<Drawable>::poly;

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

void draw(Drawable const& drawable, std::ostream& out) { drawable.draw(out); }

}  // namespace tesample

#endif  // SRC_ERASE_IT_H
