#pragma once

#include <iostream>

#define UP ((i - 1) / 2)
#define LEFT ((i * 2) + 1)
#define RIGHT ((i * 2) + 2)

using namespace std;

class Pyramid {
public:
	Pyramid(int* arr, int size);
	~Pyramid();
	void print_pyramid();
	void print_root();
	void print_left();
	void print_right();
	void print_parent();
private:
	int* heap = nullptr;
	int size = 0;
	int current_lvl = 0;
	int i = 0;
	int root = 0;
    void print_node(int lvl, int i, int key, int parent);
};