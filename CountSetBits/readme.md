# Counting Set btis

Goal: Count all the set bits

Example: 10110101 has five bits set.

## Obvious way
The obvoius way to count bits in a number is too mask the right bit, added it 
to a number, then shift right. Doing this for the size of the number.

BinaryNum <- 1001 
count <- 0

count <- count + (BinaryNum AND 1)
*    1 <-     0 + (1011       &  1)*  (0001)
BinaryNum <- BinaryNum shiftright 
*    0100 <-       1001 SHR*  

## Fast way
The fast way to count bits is to sum them together. Take a 2 bit number and add
the two together. It turns out they end up reprecenting the amount of set bits.

Example: 00, 0 + 0 = 00 (0)
         01, 0 + 1 = 01 (1)
         10, 1 + 0 = 01 (1)
         11, 1 + 1 = 11 (2)

Doing this with larger numbers is simply adding each one then spliting in half. 
making it log2(Sizeof Var) time.

