#pragma once

#include <stdexcept>

class bad_figure : public std::invalid_argument
{
public:
	explicit bad_figure(const std::string&) noexcept;
};
