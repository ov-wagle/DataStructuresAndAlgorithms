#include <iostream>

using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

typedef enum {
	POSITION_FIRST, 
	POSITION_RANDOM,
	POSITION_LAST
}	position_t;

static Node *list = NULL;

static void print_list_elements(Node *node) {
	cout << "Elements in the list : ";
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}

	cout << "\n";
	return;
}

static int add_node_to_position(int data, int position, position_t place) {
	if (NULL == list) {
		list = new Node();
		list->data = data;
		list->next = NULL;
		print_list_elements(list);
		return 0;
	}

	switch (place) {
		case POSITION_FIRST:
		{
			Node *newNode;
			Node *dummy = new Node();
			
			dummy->data = list->data;
			dummy->next = list->next;

			list->data = data;
			list->next = dummy;

			print_list_elements(list);
			break;
		}

		case POSITION_RANDOM:
		{
			int track = 0;
			
			break;
		}
	}

	return 0;
}

int main(int argc, char *argv[]) {
	int option, data, position;

	while (1) {
		cout << "Enter option for element entry : \n";
		cin >> option;

		if (option == POSITION_RANDOM) {
			cout << "Enter position in the list : \n";
			cin >> position;
		}

		cout << "Enter data in the list : \n";
		cin >> data;

		add_node_to_position(data, position, (position_t)option);
	}

	return 0;
}