/*! \mainpage Two kinds of sorting
*
* \section intro_sec Introduction
*
* This is the project with the realisation of two kinds of sorting
* 
* \subsection bubble_sort Bubble sort
*simple sorting algorithm that works by repeatedly stepping through the list to be sorted, 
comparing each pair of adjacent items and swapping them if they are in the wrong order
* \subsection merge_sort Merge sort
*In computer science, merge sort (also commonly spelled mergesort) is an O(n log n) comparison-based sorting algorithm. 
Most implementations produce a stable sort, which means that the implementation preserves the input order of equal elements in the sorted output.
* 
*(c) Umnov A A IU8-24
*/

/**
Here you can see bubble sort
simple sorting algorithm that works by repeatedly stepping through the list to be sorted, 
comparing each pair of adjacent items and swapping them if they are in the wrong order
(ñ) Umnov A A IU8-24
*/


#include <iostream>

/** \fn swap
	\brief Function to change 2 values ch1 ch2 with type char
*/
void swap (char& ch1, char& ch2)
{
	char tmp = ch1; ch1 = ch2; ch2 = tmp;
}

/*! \fn bubble_sort
	\brief Function which makes the sorting process
*/
void bubble_sort (char* input/*!<Input string*/)
{
	int len = strlen (input); /*!Getting the length of the string*/
	for (int i = 0; i < len - 1; ++i) /*!Cycle; i is the number of current element, the next ones are compared with it*/
	{
		for (int k = i + 1; k < len; ++k) /*!k runs throw all the elements after i*/
		{
			if (input[i] > input[k]) /*!if the element with k index < than the element with i index, they are swapped*/
				swap (input[i], input[k]);
		}
	}
}
