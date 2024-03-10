# Binary Exponentiation

## Description

Binary exponentiation is a technique that allows raising any number to the power of \( n \) using only \( O(\log n) \) multiplications (instead of \( n \) multiplications with the conventional approach).

Moreover, the technique described here can be applied to any associative operation, not just multiplication. Recall that an operation is associative if, for any \( a \), \( b \), and \( c \), the following holds:

    (a * b) * c = a * (b * c)

The most obvious generalization is to remainders modulo some number (it is obvious that associativity is preserved). The next most "popular" generalization is to matrix multiplication (its associativity is well-known).

## Algorithm

Notice that for any number \( a \) and even number \( n \), the following identity holds (following from the associativity of the multiplication operation):

    a^n = (a^{n/2})^2 = a^{n/2} * a^{n/2}

This identity forms the basis of the binary exponentiation method. Indeed, for even \( n \), we have shown how, by spending just one multiplication operation, we can reduce the problem to a power that is half the original.

Now, let's understand what to do if the exponent \( n \) is odd. Here, we simply transition to the power \( n-1 \), which will then be even:

    a^n = a^{n-1} * a

Thus, we essentially have a recursive formula: for an even exponent \( n \), we transition to \( n/2 \), and otherwise, we transition to \( n-1 \). It is clear that there will be no more than \( 2 \log n \) transitions before we reach \( n = 0 \) (the base of the recursive formula). Therefore, we have obtained an algorithm that works in \( O(\log n) \) multiplications.
