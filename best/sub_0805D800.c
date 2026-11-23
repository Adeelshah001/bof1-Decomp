extern s32 sub_0806BDE0(s32, s32, s32, void *, s32);

void sub_0805D800(s32 arg0, s32 arg1, void *arg2) {
    void *r3;
    u8 first;
    s32 count;
    u8 second;
    
    r3 = arg2;
    first = *(u8 *)r3;
    count = first + 1;
    r3 = r3 + 1;
    second = *(u8 *)r3;
    if (second == 1) {
        r3 = r3 + 1;
    }
    sub_0806BDE0(0, arg0, arg1, r3, count);
}
