typedef struct {
    u32 kind;
    u32 sign;
    s32 exponent;
    u32 fraction;
} FloatParts;

typedef union {
    u32 bits;
    struct {
        u32 fraction : 23;
        u32 exponent : 8;
        u32 sign : 1;
    } fields;
} FloatWord;

static inline s32 isNaN(const FloatParts *parts)
{
    s32 result = 0;
    if (parts->kind <= 1)
        result = 1;
    return result;
}

static inline s32 isInfinity(u32 kind)
{
    if (kind == 4)
        return 1;
    return 0;
}

static inline s32 isZero(u32 kind)
{
    if (kind == 2)
        return 1;
    return 0;
}

u32 sub_080A5850(const FloatParts *parts)
{
    u32 fraction = parts->fraction;
    u32 sign = parts->sign;
    u32 biasedExponent = 0;
    FloatWord result;

    if (isNaN(parts)) {
        biasedExponent = 255;
        fraction |= 0x100000;
    } else if (isInfinity(parts->kind)) {
        goto infinity;
    } else if (isZero(parts->kind)) {
        fraction = 0;
    } else if (fraction != 0) {
        s32 exponent = parts->exponent;
        if (exponent < -126) {
            s32 shift = -126 - exponent;
            if (shift > 25)
                fraction = 0;
            else
                fraction >>= shift;
        } else if (exponent > 127) {
infinity:
            biasedExponent = 255;
            fraction = 0;
            goto pack;
        } else {
            biasedExponent = exponent;
            biasedExponent += 127;
            if ((fraction & 127) == 64) {
                if (fraction & 128)
                    fraction += 64;
            } else {
                fraction += 63;
            }
            if ((s32)fraction < 0) {
                fraction >>= 1;
                biasedExponent++;
            }
        }
        fraction >>= 7;
    }
pack:
    result.fields.fraction = fraction;
    result.fields.exponent = biasedExponent;
    result.fields.sign = sign;
    return result.bits;
}
