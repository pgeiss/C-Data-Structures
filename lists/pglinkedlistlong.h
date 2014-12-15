#ifndef PG_LINKED_LIST_LNG
	#define PG_LINKED_LIST_LNG
	typedef struct PG_LINKED_LIST_LONG {
		int64_t num;
		struct PG_LINKED_LIST_LONG * next;
		struct PG_LINKED_LIST_LONG * prev;
	} pgListLong;
//TODO
#endif