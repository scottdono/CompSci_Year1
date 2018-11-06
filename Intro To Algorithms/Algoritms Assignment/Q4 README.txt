Question 4 has two aspects to it. Firstly you cannot really "delete" from an array unless you use linked list. I didn't use linked list in 
my program because you can get around this by just excluding the element that you remove in your second display. The most important part of 
removing an Nth element from an array is the "position" variable. This allows you to find the element you want to delete and not display it.

In order to have the size of the array to not effect the time complexity of the program I used qsort once again. The way this algorithm works
means it is very efficient at sorting in acending order and isn't affected by the size N of the array.