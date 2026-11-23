typedef union {
    u64 ll;
    struct {
        u32 low;
        u32 high;
    } s;
} Wtype;

u64 sub_080A619C(u64 u, s32 b)
{
    Wtype uu;
    Wtype w;
    s32 t;
    u32 tmp;

    uu.ll = u;
    if (b == 0) {
        return u;
    }
    t = 32 - b;
    if (t <= 0) {
        w.s.high = 0;
        w.s.low = uu.s.high >> -t;
    } else {
        tmp = uu.s.high << t;
        w.s.high = uu.s.high >> b;
        w.s.low = (uu.s.low >> b) | tmp;
    }
    return w.ll;
}
