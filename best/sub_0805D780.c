typedef struct {
    u8 pad00[0x20];
    s32 unk20;
} Struct2DBD0;

extern Struct2DBD0 D_0202DBD0;

void sub_08068984(s32 index, s32 x, s32 y, s32 arg3, u32 arg4);
s32 sub_080A07AC(s32, s32);
s32 sub_080A0844(s32, s32);

void sub_0805D780(s32 arg0, s32 arg1, s32 arg2) {
    u8 buf[9];
    u8 *p;
    s32 i;
    s32 val = D_0202DBD0.unk20;
    s32 fill = 2;

    p = &buf[7];
    do {
        *p-- = fill;
    } while ((s32)p >= (s32)buf);
    p = &buf[8];
    *p = 0;

    if (val != 0) {
        i = 7;
    loop:
        if (val == 0) {
            goto done;
        }
        {
            u8 *dst = &buf[i];
            *dst = sub_080A0844(val, 10) + 0x20;
            val = sub_080A07AC(val, 10);
            if (--i < 0) {
                goto done;
            }
            goto loop;
        }
    } else {
        buf[7] = 0x20;
    }
done:
    sub_08068984(arg0, arg1, arg2, 0, (u32)buf);
}
