extern const u8 D_0822F254[];
extern void (* const D_080FD288[])(void *);

typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xA4 - 0x3C];
    u16 unkA4;
} Entity4B2;

void sub_0804B258(Entity4B2 *arg0, u8 arg1) {
    u32 idx;
    u16 offset;
    u8 fnIdx;
    arg0->unkA4++;
    arg1 = ~arg1;
    idx = arg0->unk3B * 4;
    offset = D_0822F254[idx + 2] | (D_0822F254[idx + 3] << 8);
    offset += arg1;
    fnIdx = D_0822F254[offset];
    D_080FD288[fnIdx](arg0);
}
