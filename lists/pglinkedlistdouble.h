#ifndef PG_LINKED_LIST_DBL
	#define PG_LINKED_LIST_DBL
	typedef struct PG_LINKED_LIST_DOUBLE {
		double num;
		struct PG_LINKED_LIST_DOUBLE * next;
		struct PG_LINKED_LIST_DOUBLE * prev;
	} pgListDouble;
//TODO
#endif