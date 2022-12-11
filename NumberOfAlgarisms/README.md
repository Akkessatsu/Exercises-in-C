This program written in C calculates the number of digits of a closed interval from 1 to a given number X:
[1, X].

The algorithm used is based on the formula:
Q = α * N - ( 9 + 99 + 999 + 999....9);

Which:

Q = The number of digits of the interval
N = The last number of the sequence
α = The number of positions of the last number
9 + 99 + 999.... = A "constant" that follows the follow rule:

The number of "nines" added is defined by the number of positions minus one (α - 1)
We add a nine digit at final of each nine corresponding its position in the sequence (we count by 0, like arrays).

i. e. α = 4
Number of nines = 4 - 1 = 3.

Sequence of Nines = (9 + 99 + 999).

Any recommendation of changeor tips are welcome!
