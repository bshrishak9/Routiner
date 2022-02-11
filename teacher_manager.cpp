#include "teacher.h"

#define t_num 40

class Teacher* Teachers = (class Teacher*)calloc(t_num, sizeof(class Teacher));

class TeacherManager {

private:
	static int s_count;
public:
	static int count() const {
		return s_count;
	}
	
	static Teacher *get(int id) const {
		for(int i = 0;i < t_num;i++) {
			if((Teachers+i)->id == id) {
				return &Teachers[i];
			}
		}
		return NULL;	
	}
};
