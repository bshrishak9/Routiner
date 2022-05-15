#include <iostream>
#include "day.h"

class Teacher {

private:
	int id;
	char ini[4];
	int sub_id;
	Day* days;

	static int s_count;


public:

	Teacher (int id, char *ini, int sub_id, int num_days) {
		this.id = id;
		strcpy(this.ini, ini);
		this.sub_id = sub_id;	
		days = calloc(num_days, sizeof(Day));
		s_count++;

	}
	
	static int count() const {
		return s_count;
	}

	int get_id() const {
		return this.id;
	}

	char *get_initials() const {

		return this.ini;
	}

	static bool is_able(int day, int p) {
		for(int i = 0;i < 6;i++) {
			
			if(this.days[i].index == day) {
				return this.days[i].is_able(p);	
			}
		}
		return false;
	}

};
