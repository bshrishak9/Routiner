
class Teacher {
public:
	static TeacherManager manager = new TeacherManager():

private:
	int id;
	char ini[4];
	int sub_id;
	Day* days;
	
	static int s_count;


public:
	Teacher(int, char*, int, int);
	
	static int count() const;
	int get_id() const;
	char* get_initials() const;
	static bool is_able(int, int);
};
