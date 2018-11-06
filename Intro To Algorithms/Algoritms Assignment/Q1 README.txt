The basis for Question 1 of the algorithms assignment is simple. Enter numbers into an array and find the numbers that are the furthest pair.
i.e. has the largest difference. This is easy to achieve with the qsort function that is built into C. If you sort an array in ascending order
it is always a given that the first element and the last element with have the largest difference and therefore be the furthest pair.

To find the furthest pair you must ask the user to enter into the array. The size of the array cannot be changed during run-time.

Once you have values in the array, you can use qsort and sort the values in ascending order. All thats left to do is to identify the first and
last elements of the array and copy them into another array. This is now your pair. You can then print this to the user. 

 
