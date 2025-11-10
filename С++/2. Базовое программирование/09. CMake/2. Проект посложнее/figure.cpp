#include "figure.h"

Figure::Figure() : name("Фигура"), sides_count(0) {}
Figure::Figure(unsigned sides_count) : sides_count(sides_count) {}

unsigned Figure::get_sides_count() const { return sides_count; }
std::string Figure::get_name() const { return name; }
