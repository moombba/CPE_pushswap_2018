# CPE_pushswap_2018

The game is made up of two lists of numbers named l_a and l_b.
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers.
The objective of the game is to sort l_a.

Sorting algoritm using only 2 list (l_a and l_b)
In the beginning, l_b will be empty and l_a will contain a certain amount of positive or negative numbers
only using the following instructions :
-sa
    swap the first two elements of l_a (nothing will happen if there aren’t enough elements).
-sb
    swap the first two elements of l_b (nothing will happen if there aren’t enough elements).
-sc
    sa and sb at the same time.
-pa
    take the first element from l_b and move it to the first position on the l_a list (nothing will happen if
    l_b is empty).
-pb
    take the first element from l_a and move it to the first position on the l_b list (nothing will happen if
    l_a is empty).
-ra
    rotate l_a toward the beginning, the first element will become the last.
-rb
    rotate l_b toward the beginning, the first element will become the last.
-rr
    ra and rb at the same time.
-rra
    rotate l_a toward the end, the last element will become the first.
-rrb
    rotate l_b toward the end, the last element will become the first.
-rrr
    rra and rrb at the same time.
    
    
 Only using the following functions : write, malloc, free
