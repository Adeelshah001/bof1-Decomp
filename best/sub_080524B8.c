extern u16 D_03001624[];
extern u16 D_030016AC[];
extern u8 D_03004830[];
extern void sub_08052538(void);

void sub_080524B8(void *actor) {
    u8 *base = (u8 *)actor;
    u16 *bc = (u16 *)(base + 0xBC);
    u8 *flag = base + 0x55;
    u16 val;

    val = (u16)(*bc + *flag);
    *bc = val;

    *(u32 *)(base + 0x48) += *(u32 *)(base + 0x44);

    val = *bc;
    D_03001624[0] = (u16)((((u32)val << 24) >> 16) | (u8)(~val));

    D_030016AC[0] = (u16)(((u32)*(u8 *)(base + 0x4A) << 8) | (u8)((u32)~*(u8 *)(base + 0x4A) - 0x5F));

    if (val >= *(u8 *)(base + 0x54)) {
        *(u32 *)(base + 0x64) = (u32)sub_08052538;
        *(u8 *)(base + 0x54) = *flag;
        D_03004830[0x40] += 1;
    }
}
