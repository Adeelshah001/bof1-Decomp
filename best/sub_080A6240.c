typedef union {
    s64 d;
    struct {
        s32 lo;
        s32 hi;
    } w;
} Wide;

s64 sub_080A6240(s32 lo, s32 hi) {
    Wide r;

    r.w.lo = -lo;
    r.w.hi = -hi;
    if (r.w.lo != 0) {
        r.w.hi -= 1;
    }
    return r.d;
}
