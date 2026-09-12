//	prices:45 12 78 34 23 90
//	
//	algorithm of bubble sort:
//	for(int i=0;i<n-1;i++){
//	for(int j=0;j<n-i-1;j++){
//	if(array[j]>array[j+1]){
//	swap(array[j],array[j+1]);
//	}
//	}
//	}
//	
//	1.Number of passes required to completely sort the array
//	
//	for 1st pass:
//	[45 12 78 34 23 90] original
//	
//	45>12 (swap)    12 45 78 34 23 90
//	45>78 (noswap)  12 45 78 34 23 90
//	78>34 (swap)    12 45 34 78 23 90
//	78>23 (swap)    12 45 34 23 78 90
//	78>90 (noswap)  12 45 34 23 78 90
//	
//	for 2nd pass
//	
//	12>45 (noswap)  12 45 34 23 78 90
//	45>34 (swap)    12 34 45 23 78 90
//	45>23 (swap)    12 34 23 45 78 90
//	45>78 (noswap)  12 34 23 45 78 90
//
//	for 3rd pass:
//	
//	12>34 (noswap)  12 34 23 45 78 90
//	34>23 (swap)    12 23 34 45 78 90
//	34>45 (noswap)  12 23 34 45 78 90
//	
//	for 4th pass:
//	
//	12>23 (noswap)  12 23 34 45 78 90
//	23>34 (noswap)  12 23 34 45 78 90
//	
//	Stop sorting
//	
//	no of passes : 4
//	total number of comparisons : 14
//	Total swaps: 6
//	Final sorted array: 12 23 34 45 78 90

