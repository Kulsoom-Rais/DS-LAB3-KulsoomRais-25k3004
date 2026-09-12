//55 61 67 72 78 81 80 85
//
// algorithm:
//	for(int i=0;i<n-1;i++){
//bool swap=false
//	for(int j=0;j<n-i-1;j++){
//	if(array[j]>array[j+1]){
//	swap(array[j],array[j+1]);
//swap=true
//	}
//	}
//if(!swap){ array sotrted already
//	return;
//}
//	}
////
//
//Pass 1
//
//Compare:
//
//55 < 61    no swap
//61 < 67   no swap
//67 < 72   no swap
//72 < 78    no swap
//78 < 81   no swap
//81 > 80   SWAP
//80 < 85   no swap
//
//After Pass 1:
//
//55  61  67  72  78  80  81  85
//
//Comparisons = 7
//Swaps = 1
//Pass 2
//
//Now array is already sorted:
//
//55  61  67  72  78  80  81  85
//
//Modified Bubble Sort checks whether any swap happens.
//
//Comparisons:
//
//55 < 61  no
//61 < 67  no
//67 < 72  no
//72 < 78  no
//78 < 80  no
//80 < 81  no
//81<85    no 
//No swaps occurred.
//
//Therefore, the algorithm terminates after Pass 2.
//
//Comparisons in Pass 2 = 7
//
//1. After which pass does the array become sorted? 
//answer: after 1st pass array become sorted
//
//2. How many comparisons are performed before the algorithm terminates?
//14 comparisons in total
//
//3. How many swaps are performed?
//only one swap
//
//4. How many passes would standard Bubble Sort perform on the same array?
//n-1 i.e 8-1=7passes
//
//5. How many comparisons would standard Bubble Sort perform?
//total 7 passes
//at eachpass 1 inner  iteration is decreased as we found biggest no at the end of the array
//total comp=7+6+5+4+3+2+1=28
