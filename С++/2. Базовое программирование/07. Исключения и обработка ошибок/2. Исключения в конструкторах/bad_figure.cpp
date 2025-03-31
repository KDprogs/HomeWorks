#include "bad_figure.h"

bad_figure::bad_figure(const std::string& message) noexcept : std::invalid_argument(message) {}
