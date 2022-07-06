#include <iostream>
#include "type.h" 

class Types {

private:
	int _id;
	int _sec_id;
	int _sub_id;
	int _t_id[4];	
	
public:
	int get_id() const {
		return this._id;	
	}

	int get_sec_id() const {
		return this._sec_id;
	}

	int get_sub_id() const {
		return this._sec_id;
	}
	
	int set_sec_id(int sec_id) { 
		this._sec_id = sec_id;
	}

};
