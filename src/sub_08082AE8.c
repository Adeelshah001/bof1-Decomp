typedef struct {
    u8 pad00[0x24];
    u16 unk24;
    u8 pad26[0x54 - 0x26];
    u16 unk54;
} Entity81;

extern const u8 D_082D431C[];

s32 sub_08003104(void);

s16 sub_08082AE8(Entity81 *arg0)
{
    const u8 *p = &D_082D431C[arg0->unk54];
    u8 val = *p;
    if (val != 0) {
        s32 r = sub_08003104();
        u32 delta = 3;
        delta &= r;
        delta--;
        delta <<= 0x18;
        delta >>= 0x18;
        if (delta == 2) {
            delta = 1;
        }
        r = *p;
        val = delta + r;
        if (val & 0x80) {
            val = 0;
        }
    }
    arg0->unk24 = val;
    return val;
}
