void sub_0805DB60(void *arg0, u8 arg1);
void sub_0805DB80(void *arg0, s32 arg1, s32 arg2);
void sub_0805DE14(void *arg0, s32 arg1, s32 arg2);

struct Unk5DDA8 {
    u8 pad00[0x112];
    u16 unk112;
};

extern const u8 D_08100690[];
extern const u8 * const D_08100694[];

void sub_0805DDA8(struct Unk5DDA8 *arg0) {
    u16 val = arg0->unk112;
    if (val != 0) {
        u32 idx = (val & 0x3000) >> 12;
        u32 offset = D_08100690[idx] * (u8)val;
        const u8 *ptr = D_08100694[idx] + offset;
        sub_0805DB60(arg0, ptr[0x0F]);
    }
    sub_0805DB80(arg0, 10, 0x127);
    sub_0805DB80(arg0, 10, 0x13C);
    sub_0805DE14(arg0, 10, 0x2114);
}
