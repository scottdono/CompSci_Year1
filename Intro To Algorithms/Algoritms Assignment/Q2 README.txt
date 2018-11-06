The basis for Question 2 of the algorithms assignment is slightly more complicated. Enter numbers into an array and find the numbers that are the closest pair.
i.e. has the smallest difference. This is easy to achieve with the qsort function that is built into C. You can then use comparison loops to find the numbers with the 
smallest difference between them. Once you make note of this difference you can go through the array oncec again and identify the pairs that have that smallest difference
when you subtract them from each other. The main problem with this question is that you could have the possibility of multiple pairs.

To find the closest pair you must ask the user to enter into the array. The size of the array cannot be changed during run-time.

Once you have values in the array, you can use qsort and sort the values in ascending order. All thats left to do is to identify the elements that share the smallest
difference of the array elements and copy them into another array. This is now your pair. You can then print this to the user. 