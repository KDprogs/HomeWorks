﻿#pragma once

#include <string>

class Figure
{
public:
	Figure();

	unsigned get_sides_count() const;
	std::string get_name() const;

protected:
	Figure(unsigned sides_count);

	std::string name;
	unsigned sides_count;
};
