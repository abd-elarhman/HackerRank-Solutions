/**
 * @Repository HackerRank Soulutions
 * @file       Flipping bits
 * @author Abdelrahman Ahmed Moussa (abdelrahman.ahmed0599@gmail.com)
 * @copyright Copyright (c) 2024
 * 
 */
long flippingBits( long n) 
{
    return (~(unsigned long)n);
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int q = parse_int(ltrim(rtrim(readline())));

    for (int q_itr = 0; q_itr < q; q_itr++) {
         long n = parse_long(ltrim(rtrim(readline())));

         long result = flippingBits(n);

        fprintf(fptr, "%u\n", result); //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< replace (%ld) by (%u)
    }

    fclose(fptr);

    return 0;
}
