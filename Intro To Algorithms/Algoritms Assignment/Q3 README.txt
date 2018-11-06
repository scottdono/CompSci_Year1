Question 3 is basically a stack that is implemented as a queue i.e. First in, First out. It has PUSH and POP functionality.

The key to making it work is to have global "top" and "bottom" variables. This way you can stack elements on top but pop them out 
from the bottom. In my program I use a character array and you can see the stack visually each and every time you push or pop to it.

The size of the array is defined and cannot be changed in run-time and if you try to exceed the limits of the array you will be told 
that you stack has underflow or overflow.