#include "pyramid.h"

Pyramid::Pyramid(int* arr, int _size) {
	size = _size;
	heap = new int[size];
	for (int i = 0; i < size; i++) {
		heap[i] = arr[i];
	}

	root = heap[0];
}

Pyramid::~Pyramid() {
	delete[] heap;
	heap = nullptr;
}

void Pyramid::print_pyramid() {
	cout << "Исходный массив: ";
	for (int i = 0; i < size; i++) {
		cout << heap[i] << ' ';
	}
	cout << endl;

	int ceiling(2);
	int cntr(1);
	int lvl(1);
	for (int i = 0; i < size; i++) {
		if (i == 0) {
			print_root();
		}
		else {
			if (cntr == ceiling) {
				cntr = 1;
				ceiling *= ceiling;
				print_node(lvl, i, heap[i], heap[UP]);
				lvl++;
			}
			else {
				print_node(lvl, i, heap[i], heap[UP]);
				cntr++;
			}
		}
	}
}

void Pyramid::print_root() {
	cout << current_lvl << " root " << root << '\n';
}

void Pyramid::print_node(int lvl, int i, int key, int parent) {
	if (i % 2 == 0) cout << lvl << " right(" << parent << ") " << key << '\n';
	else            cout << lvl << " left("  << parent << ") " << key << '\n';
}

void Pyramid::print_left() {
	if ((LEFT + 1) > size) {
		cout << "Ошибка! Отсутсвуют потомки\n";
		return ;
	}
	else {
		cout << "Ок\n";

		++current_lvl;

		i = LEFT;

		cout << "Вы находитесь здесь: ";
		print_node(current_lvl, i, heap[i], heap[UP]);
	}
}

void Pyramid::print_right() {
	if ((RIGHT + 1) > size) {
		cout << "Ошибка! Отсутсвуют потомки\n";
		return;
	}
	else {
		cout << "Ок\n";

		++current_lvl;

		i = RIGHT;

		cout << "Вы находитесь здесь: ";
		print_node(current_lvl, i, heap[i], heap[UP]);
	}
}

void Pyramid::print_parent() {
	if (current_lvl == 0) {
		cout << "Ошибка! Отсутствует родитель\n";
		return ;
	}
	else if (current_lvl == 1) {
		current_lvl--;
		cout << "Вы находитесь здесь: ";
		print_root();
		return ;
	}
	else {
		cout << "Ок\n";

		--current_lvl;

		i = UP;

		cout << "Вы находитесь здесь: ";
		print_node(current_lvl, i, heap[i], heap[UP]);
	}
}