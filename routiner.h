struct day_t {
    int t_id;
    char day_name[10];
    int periods[8];
};

struct subject {
    int id;
    char sub_name[20];
    char grade[5];
    int n_period;
};

struct type {
    int id;
    int t_id[4];
    int sec_id;
    int s_id;
    int n_prds;
	int n_prds_o;
    int is_practical;
};

struct section {
    int id;
    char sec_name[10];
    char grade[5];
    int sub[6];
};

struct teacher {
	char ini[5];
	int id;
	char sub[15];	
};

struct teacher* get_teacher(int);
struct subject* get_subject(int);
struct type* get_type(int);
void cut_day_t(int, int, int);
void cut_all_day_t(int, int);

unsigned int is_sec_able(int, int);
unsigned int is_day_period_able(int, int, int);


int get_gpc(int*, int);

void get_type_sec(int*, int);
void get_periods_dp(int*, int, int, int);
void get_periods_dps(int*, int, int, int, int);
void filter_teachers(int*, int, int, int);
double calculate_pc(int, int, int, int);
unsigned int check_practical_teacher(int, int, int, char*);
void load_data();

PyMODINIT_FUNC PyInit_pyroutiner(void);
