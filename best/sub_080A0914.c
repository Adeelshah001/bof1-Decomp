void sub_080A0840(void);

u32 sub_080A0914(u32 dividend, u32 divisor)
{
    u32 bit;
    u32 quotient;
    u32 part;
    u32 limit;

    if (divisor == 0)
    goto div_by_zero;

    bit = 1;
    quotient = 0;
    if (dividend < divisor)
    goto done;

scale_by_16:
    if (divisor < limit && divisor < dividend) {
    divisor <<= 4;
    bit <<= 4;
    goto scale_by_16;
    }

    limit <<= 3;
scale_by_2:
    if (divisor < limit && divisor < dividend) {
    divisor <<= 1;
    bit <<= 1;
    goto scale_by_2;
    }

divide:
    if (dividend >= divisor) {
        dividend -= divisor;
        quotient |= bit;
    }
    part = divisor >> 1;
    if (dividend >= part) {
        dividend -= part;
        quotient |= bit >> 1;
    }
    part = divisor >> 2;
    if (dividend >= part) {
        dividend -= part;
        quotient |= bit >> 2;
    }
    part = divisor >> 3;
    if (dividend >= part) {
        dividend -= part;
        quotient |= bit >> 3;
    }
    if (dividend == 0)
        goto done;
    bit >>= 4;
    if (bit == 0)
        goto done;
    divisor >>= 4;
    goto divide;

done:
    return quotient;

div_by_zero:
    sub_080A0840();
    return 0;
}
