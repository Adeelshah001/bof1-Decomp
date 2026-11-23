void sub_08038278(void *);
void sub_08083BB4(void *);

typedef struct Unk8A288 {
    u8 pad00[0x02];
    u8 unk2;
    u8 pad03[0x06 - 0x03];
    u16 unk6;
    u8 pad08[0x20 - 0x08];
    u16 unk20;
    u8 pad22[0x24 - 0x22];
    u16 unk24;
    u8 pad26[0x2C - 0x26];
    u16 unk2C;
    u8 pad2E[0x4D - 0x2E];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x78 - 0x51];
    struct Unk8A288 *unk78;
} Unk8A288;

void sub_0808A288(Unk8A288 *arg0) {
    u32 parent;
    u8 val;

    sub_08038278(arg0);
    arg0->unk2C = arg0->unk6;
    parent = (u32)arg0->unk78;
    val = *(u8 *)(parent + 2) - 0x1E;
    if (val < arg0->unk2) {
        arg0->unk2 = val;
        *(u8 *)&arg0->unk6 = *(u8 *)(parent + 6) - 0x20;
        parent = *(u8 *)(parent + 0x2C) + 1;
        *(u8 *)&arg0->unk2C = parent;
    }
    arg0->unk4D = 4;
    if ((u8)arg0->unk24 == 0xA && arg0->unk50 == 0) {
        sub_08083BB4(arg0);
        arg0->unk20 = 1;
        arg0->unk50++;
    }
}
