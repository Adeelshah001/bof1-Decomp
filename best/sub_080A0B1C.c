typedef struct {
    u8 *unk00;
    s32 unk04;
    s32 unk08;
    u16 unk0C;
    u16 pad0E;
    u8 *unk10;
    s32 unk14;
    u8 pad18[0x54 - 0x18];
    s32 unk54;
} S;

s32 sub_080A0BE4(void *arg0, s32 arg1, s32 arg2);

s32 sub_080A0B1C(u8 *arg0, s32 arg1, s32 arg2) {
    s32 ret;
    S s;

    s.unk0C = 0x208;
    s.unk00 = arg0;
    s.unk10 = arg0;
    s.unk08 = 0x7FFFFFFF;
    s.unk14 = 0x7FFFFFFF;
    s.unk54 = *(s32 *)0x08318774;
    ret = sub_080A0BE4(&s, arg1, arg2);
    *s.unk00 = 0;
    return ret;
}
