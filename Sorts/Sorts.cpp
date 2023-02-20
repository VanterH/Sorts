#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;


class BubbleSort
{
public:
	BubbleSort();
	~BubbleSort();
	void insert_sort();
	void bubble_sort();
	void selection_sort();
private:
	int arr_1k[1000];
	int arr_5k[5000];
	int arr_10k[10000];
};

BubbleSort::BubbleSort()
{
}

BubbleSort::~BubbleSort()
{
}



void BubbleSort::bubble_sort()
{
	cout << "Bubble sort:\n";

	srand((unsigned)time(NULL));
	const int size_1k = 1000, size_5k = 5000, size_10k = 10000;
	for (int i = 0; i < size_1k; i++)
	{
		arr_1k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_5k; i++)
	{
		arr_5k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_10k; i++)
	{
		arr_10k[i] = 1 + (rand() % 100000);
	}

	int temp = 0;
	double time_begin = clock();
	for (int i = 0; i < 1000 - 1; i++) {
		for (int j = 0; j < 1000 - i - 1; j++) 
		{
			if (arr_1k[j] > arr_1k[j + 1]) 
			{				
				temp = arr_1k[j];
				arr_1k[j] = arr_1k [j + 1] ;
				arr_1k[j + 1] = temp;
			}
		}
	}
	double time_end = clock();
	double time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "1k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();
	for (int i = 0; i < 5000 - 1; i++) {
		for (int j = 0; j < 5000 - i - 1; j++)
		{
			if (arr_5k[j] > arr_5k[j + 1])
			{
				temp = arr_5k[j];
				arr_5k[j] = arr_5k[j + 1];
				arr_5k[j + 1] = temp;
			}
		}
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "5k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();
	for (int i = 0; i < 10000 - 1; i++) {
		for (int j = 0; j < 10000 - i - 1; j++)
		{
			if (arr_10k[j] > arr_10k[j + 1])
			{
				temp = arr_1k[j];
				arr_10k[j] = arr_10k[j + 1];
				arr_10k[j + 1] = temp;
			}
		}
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "10k were sorted in a " << time_spent << " seconds\n";
}

void BubbleSort::insert_sort()
{
	cout << "Insert sort:\n";

	srand((unsigned)time(NULL));
	const int size_1k = 1000, size_5k = 5000, size_10k = 10000;
	for (int i = 0; i < size_1k; i++)
	{
		arr_1k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_5k; i++)
	{
		arr_5k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_10k; i++)
	{
		arr_10k[i] = 1 + (rand() % 100000);
	}

	double time_begin = clock();
	for (int i = 1; i < 1000; i++){
		for (int j = i; j > 0 && arr_1k[j - 1] > arr_1k[j]; j--) {
			swap(arr_1k[j - 1], arr_1k[j]);
		}			
	}		     
	double time_end = clock();
	double time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "1k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();                                            //Перепистаь алгоритмом без swap()
	for (int i = 1; i < 5000; i++) {
		for (int j = i; j > 0 && arr_5k[j - 1] > arr_5k[j]; j--) {
			swap(arr_5k[j - 1], arr_5k[j]);
		}
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "5k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();
	for (int i = 1; i < 10000; i++) {
		for (int j = i; j > 0 && arr_10k[j - 1] > arr_10k[j]; j--) {
			swap(arr_10k[j - 1], arr_10k[j]);
		}
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "10k were sorted in a " << time_spent << " seconds\n";
}

void BubbleSort::selection_sort()
{
	cout << "Selection sort:\n";
	srand((unsigned)time(NULL));
	const int size_1k = 1000, size_5k = 5000, size_10k = 10000;
	for (int i = 0; i < size_1k; i++)
	{
		arr_1k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_5k; i++)
	{
		arr_5k[i] = 1 + (rand() % 100000);
	}
	for (int i = 0; i < size_10k; i++)
	{
		arr_10k[i] = 1 + (rand() % 100000);
	}

	double time_begin = clock();
	int j = 0;
	int tmp = 0;
	for (int i = 0; i < 1000; i++) {
		j = i;
		for (int k = i; k < 1000; k++) {
			if (arr_1k[j] > arr_1k[k]) {
				j = k;
			}
		}
		tmp = arr_1k[i];
		arr_1k[i] = arr_1k[j];
		arr_1k[j] = tmp;
	}
	double time_end = clock();
	double time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "1k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();
	j = 0;
	tmp = 0;
	for (int i = 0; i < 5000; i++) {
		j = i;
		for (int k = i; k < 5000; k++) {
			if (arr_5k[j] > arr_5k[k]) {
				j = k;
			}
		}
		tmp = arr_5k[i];
		arr_5k[i] = arr_5k[j];
		arr_5k[j] = tmp;
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "5k were sorted in a " << time_spent << " seconds\n";

	time_begin = clock();
	j = 0;
	tmp = 0;
	for (int i = 0; i < 10000; i++) {
		j = i;
		for (int k = i; k < 10000; k++) {
			if (arr_10k[j] > arr_10k[k]) {
				j = k;
			}
		}
		tmp = arr_10k[i];
		arr_10k[i] = arr_10k[j];
		arr_10k[j] = tmp;
	}
	time_end = clock();
	time_spent = (double)(time_end - time_begin) / CLOCKS_PER_SEC;
	cout << "10k were sorted in a " << time_spent << " seconds\n";
}



int main()
{
	BubbleSort mas;
	mas.bubble_sort();
	mas.insert_sort();
	mas.selection_sort();
}
