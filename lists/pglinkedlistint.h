#ifndef PG_LINKED_LIST_INTEGER
	#define PG_LINKED_LIST_INTEGER
	#include <stdlib.h>
	#include <stdint.h>

	typedef struct PG_LINKED_LIST_INT {
		int32_t num;
		struct PG_LINKED_LIST_INT * next;
		struct PG_LINKED_LIST_INT * prev;
	} pgListInt;

	pgListInt* pgListAddFrontInt(pgListInt* head, int32_t toAdd) {
		//TODO: Error support for head == NULL
		pgListInt* newHead = malloc(sizeof(pgListInt));
		newHead->num = toAdd;
		newHead->next = head;
		newHead->prev = NULL;
		head->prev = newHead;
		return newHead;
	}

	void pgListAddLastInt(pgListInt* head) {
		//TODO
	}

	pgListInt* pgListSearchInt(pgListInt* head, int32_t toFind) {
		pgListInt* current = head;

		while (current != NULL) {
			if (toFind == current->num)
				return current;

			else current = current->next;
		}

		return NULL;
	}

	void pgListInsertIndexInt(pgListInt* head, int32_t index, int32_t toAdd) {
		//TODO
	}

	pgListInt* pgListConstructInt(int32_t num, ...) { //Variadic arg should be zero or more int32_t's
		//TODO
		return NULL;
	}

	void pgListFreeInt(pgListInt* head) {
		if (head == NULL)
			return;

		if (head->next == NULL) {
			free(head);
			return;
		}

		pgListFreeInt(head->next);
		free(head);
		return;
	}

	void pgListClearInt(pgListInt* head) {
		if (head == NULL)
			return;

		head->num = 0;
		pgListFreeInt(head->next);
		head->next = NULL;
	}

#endif