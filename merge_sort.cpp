#include <iostream>

//!Declareation of the merge function
void merge (char* arr, int left, int mid, int right);


/*! \fn merge_sort
	\brief Sorts input array recursively	
*/
void merge_sort (char* input/*!<Input array (string)*/, \
				 int left/*!<Left sorting limit*/, \
				 int right/*!<Right sorting limit*/)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2; /*!<Select the average as a separator*/
		merge_sort (input, left, mid); /*!<Sort left side recursively*/
		merge_sort (input, mid + 1, right); /*!<Sort right side recursively*/
		merge (input, left, mid, right); /*!<Merge two arrays*/
	}
}

/*! \fn merge
	\brief merges two sorted arrays in one
	Uses a temp array
*/
void merge (char* arr/*!<Input array (string)*/, \
			int left/*!<Left sorting limit*/, \
			int mid/*!<Separator - the index of connection of two sorted arrays*/, \
			int right/*!<Right sorting limit*/)
{
	if ( arr == NULL || !(left <= mid <= right) ) /*!<Error check*/
		exit(1);
	
	int tmp_len = right - left + 1; /*!<Count len of tmp array*/
	char* tmp = new char[tmp_len]; /*!<Memory allocation for the temp array*/
	int left_pos = left; /*!<first index of the left merge array*/
	int right_pos = mid + 1; /*!<first index of the right merge array*/
	int tmp_pos = 0; /*!<index in the temp array for the next element*/
	for (; left_pos <= mid && right_pos <= right ;) /*!Cycle before finishing copying from one of arrays*/
	{
		if ( arr[left_pos] > arr[right_pos])
			tmp[tmp_pos++] = arr[right_pos++];
		else
			tmp[tmp_pos++] = arr[left_pos++];
	}
	while (right_pos <= right) /*!copy leftover elements from the second array*/
		tmp[tmp_pos++] = arr[right_pos++];
	while (left_pos <= mid) /*!copy leftover elements from the second array*/
		tmp[tmp_pos++] = arr[left_pos++];
	strncpy (arr+left, tmp, tmp_len); /*!<copy tmp array at the place of the two merged arrays*/
	delete [] tmp; /*!free mem from tmp array*/
}

void main (void)
{
	char s1[50], s2[] = "123456";
	strcpy(s1,s2);
}