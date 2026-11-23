typedef struct Bigint Bigint;
struct Bigint {
    Bigint *next;
    s32 k;
    s32 maxwds;
    s32 sign;
    s32 wds;
    u32 x[1];
};

void sub_080A0A68(void *, void *, s32);
Bigint *sub_080A3A38(void *, s32);
void sub_080A3A90(void *, Bigint *);

Bigint *sub_080A3AA8(void *ptr, Bigint *b, s32 m, s32 a) {
    s32 i, wds;
    u32 *x, y;
    u32 xi, z;
    Bigint *b1;

    wds = b->wds;
    x = b->x;
    i = 0;
    do {
        xi = *x;
        y = (xi & 0xffff) * m + a;
        z = (xi >> 16) * m + (y >> 16);
        a = (s32)(z >> 16);
        *x++ = (z << 16) + (y & 0xffff);
    } while (++i < wds);
    if (a) {
        if (wds >= b->maxwds) {
            b1 = sub_080A3A38(ptr, b->k + 1);
            sub_080A0A68(&b1->sign, &b->sign, b->wds * 4 + 8);
            sub_080A3A90(ptr, b);
            b = b1;
        }
        b->x[wds++] = a;
        b->wds = wds;
    }
    return b;
}
