typedef struct Entity8B {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x74 - 0x56];
    struct Entity8B *unk74;
    u8 pad78[0xE0 - 0x78];
    u8 unkE0;
    u8 unkE1;
} Entity8B;

s32 sub_0807CE30(Entity8B *arg0);
s32 sub_080915D4(Entity8B *arg0);
void sub_08037FC4(Entity8B *arg0, u16 arg1);
void sub_08083300(Entity8B *arg0, s32 arg1);
void sub_0807CB08(void);

void sub_0808B7A8(Entity8B *arg0) {
    u8 val = 0x23;
    arg0->unkE1 = val;
    if (sub_0807CE30(arg0) != 0) {
        Entity8B *p;
        sub_08037FC4(arg0, sub_080915D4(arg0));
        sub_08083300(arg0, 0x26);
        p = arg0->unk74;
        p->unk55 = 0x20;
        p->unk54 = arg0->unk54;
        arg0->unk4D = 4;
    } else {
        val = 6;
        arg0->unkE0 = val;
        arg0->unk55 = 0x3C;
        sub_0807CB08();
        arg0->unk4D = val;
    }
}
