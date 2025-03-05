#pragma once

class Counter
{
public:
	Counter();
	Counter(int& num);

	void setIncrease();
	void setDecrease();
	void getCurrent() const;

private:
	int count;
};
