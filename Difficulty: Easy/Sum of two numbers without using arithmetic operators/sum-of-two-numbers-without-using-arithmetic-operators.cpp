class Solution {
public:
    int sum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b); // bits that need carrying
            a = a ^ b;                           // partial sum (no carry)
            b = (int)(carry << 1);               // shifted carry
        }
        return a;
    }
};
