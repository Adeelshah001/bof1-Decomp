extern const u8 D_080A668C[];

void sub_08037FC4(void *, u8);
void sub_0803A8EC(void *);
void sub_080A0A68(void *, const void *, u32);
void sub_080A0AC8(void *, s32, u32);
void sub_0804D4D0(void *);

typedef struct {
    u8 pad00[0x2A];
    u16 unk2A;
    u8 pad2C[0x3B - 0x2C];
    u8 unk3B;
    u8 pad3C[0x40 - 0x3C];
    u8 unk40;
    u8 pad41[0x54 - 0x41];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
} Entity4BE;

void sub_0804BEA8(Entity4BE *arg0) {
    u8 states[4], directions[8];
    u8 *initial;
    u32 idx;

    if (--arg0->unk54 == 0) {
        arg0->unk64 = (u32)sub_0804D4D0;
        arg0->unk61 = 1;
        initial = states;
        sub_080A0AC8(initial, 0, 4);
        initial[1] = 1;
        sub_080A0A68(directions, D_080A668C, 8);
        idx = arg0->unk61;
        if (arg0->unk2A != 0) {
            arg0->unk40 = states[idx];
            if (arg0->unk3B & 0x80) {
                idx += 4;
            }
            sub_08037FC4(arg0, directions[idx]);
        }
    }
    sub_0803A8EC(arg0);
}
