struct connection;
typedef struct connection connection;

struct connection {
	int id;
    connection *next;
	connection *prev;
};