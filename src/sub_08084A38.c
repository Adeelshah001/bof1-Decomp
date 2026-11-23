struct UnkStruct84A38_0 {
    u8 pad00[0x58];
    u8 unk58;
};

struct UnkStruct84A38_1 {
    u8 pad00[0xDD];
    u8 unkDD;
    u8 padDE[0xE0 - 0xDE];
    u8 unkE0;
    u8 padE1[0xF1 - 0xE1];
    u8 unkF1;
    u8 padF2[0x10B - 0xF2];
    u8 unk10B;
    u8 unk10C;
};

u8 sub_08003104(void);
s32 sub_0808504C(struct UnkStruct84A38_1 *);

s32 sub_08084A38(struct UnkStruct84A38_0 *arg0, struct UnkStruct84A38_1 *arg1)
{
    u32 limit;
    u32 r;
    u32 flag;

    flag = arg1->unkDD;
    flag &= 0x10;
    if (flag)
        return sub_0808504C(arg1);

    flag = arg0->unk58;
    if (flag != 0) {
        u32 val;
        u8 *p;
        flag = arg1->unkE0;
        if (flag == 0xA)
            return 1;
        val = (u32)sub_08003104() << 24;
        p = &arg1->unk10B;
        flag = val >> 20;
        if (flag < *p)
            return sub_0808504C(arg1);
        return 1;
    }

    flag = arg1->unkF1;
    flag &= 1;
    if (flag) {
        r = sub_08003104();
        limit = 0x80;
    } else {
        r = sub_08003104();
        limit = arg1->unk10C;
    }
    r *= 2;
    if (r >= limit)
        return 1;
    return sub_0808504C(arg1);
}
