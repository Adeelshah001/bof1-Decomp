extern u8 D_08100CB0[];
extern u16 D_03004760;
extern u32 D_030045B0[];
extern u16 D_0202DBD0[];

void sub_08061860(void);

void sub_08060DC8(void) {
    u16 *base = &D_0202DBD0[0x102];
    u32 entity;
    u16 v;
    u16 val;

    entity = D_030045B0[12];
    v = D_03004760 & 0xF0FF;
    base[entity] = v;
    v = base[entity];
    if ((v & 0x3000) || ((u8)v <= 0x79)) {
        val = (u16)(v + 0x100);
    } else {
        val = (u16)(D_08100CB0[(u8)v - 0x7A] | 0x9000);
    }
    base[entity] = val;
    sub_08061860();
}
