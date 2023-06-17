/*
 ****************************************************************************************
 * The XOR operation is a bitwise operation, which means it operates on the binary       *
 * representations of numbers.                                                          *
 *                                                                                      *
 * To understand how 6 XOR 2 equals 4, you first need to convert these numbers to binary:*
 *                                                                                      *
 * 6 in binary is 110.                                                                  *
 * 2 in binary is 010.                                                                  *
 *                                                                                      *
 * Now, let's apply the XOR operation to these binary numbers. The XOR operation returns *
 * 1 if the two bits are different, and 0 if they are the same:                         *
 *                                                                                      *
 *   1 1 0  (6 in binary)                                                               *
 *   0 1 0  (2 in binary)                                                               *
 * -------- XOR                                                                         *
 *   1 0 0  (4 in binary)                                                               *
 *                                                                                      *
 * So, 6 XOR 2 indeed equals 4.                                                         *
 *                                                                                      *
 * As an example, let's imagine int nums[] = {4, 1, 2, 1, 2};                           *
 * Initial value of singleNum = 0                                                       *
 *                                                                                      *
 * singleNum = singleNum XOR 4 -> 0 XOR 4 = 4                                           *
 * singleNum = singleNum XOR 1 -> 4 XOR 1 = 5                                           *
 * singleNum = singleNum XOR 2 -> 5 XOR 2 = 7                                           *
 * singleNum = singleNum XOR 1 -> 7 XOR 1 = 6                                           *
 * singleNum = singleNum XOR 2 -> 6 XOR 2 = 4                                           *
 *                                                                                      *
 * The final value of singleNum = 4                                                     *
 *                                                                                      *
 * In binary, it corresponds to:                                                        *
 * singleNum = singleNum XOR 4 -> 0000 XOR 0100 = 0100                                  *
 * singleNum = singleNum XOR 1 -> 0100 XOR 0001 = 0101                                  *
 * singleNum = singleNum XOR 2 -> 0101 XOR 0010 = 0111                                  *
 * singleNum = singleNum XOR 1 -> 0111 XOR 0001 = 0110                                  *
 * singleNum = singleNum XOR 2 -> 0110 XOR 0010 = 0100                                  *
 ****************************************************************************************
 */

int singleNumber(int* nums, int numsSize){
    int singleNum = 0;
    for(int i = 0; i < numsSize; i++) {
        singleNum ^= nums[i];
    }
    return singleNum;
}
