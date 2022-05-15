
class Day {

private:
	int index;
	bool periods[8];

	static bool is_period_able(int p) const {
		return periods[p-1];	
	}

};
