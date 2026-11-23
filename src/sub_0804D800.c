extern const u8 D_080A668C[];
extern u8 D_03002AB0[];
extern u16 D_030023D4;
extern u16 D_030040E0;

void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, u32);
void sub_080A0AC8(void *, s32, u32);
void sub_0804B9D4(void *);
void sub_0804BCE0(void *);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x10 - 0x08];
    u32 unk10;
    u32 unk14;
    u8 pad18[0x1C - 0x18];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3B - 0x2C];
    u8 unk3B;
    u8 pad3C[0x40 - 0x3C];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0xAA - 0x62];
    u16 unkAA;
} Entity4D7;

void sub_0804D784(Entity4D7 *arg0, u16 arg1, u16 arg2) {
    arg0->unk10 = (arg0->unk10 & 0xFF000000) | (arg1 << 8);
    arg0->unk14 = (arg0->unk14 & 0xFF000000) | (arg2 << 8);
}

void sub_0804D724(Entity4D7 *arg0) {
    u8 states[4], directions[8];
    u8 *initial = states;
    u32 idx;

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

void sub_0804D800(Entity4D7 *arg0) {
    arg0->unk2A = 0xA4;
    arg0->unk41 = 8;
    arg0->unk1C = 0x1B0;
    arg0->unk3B |= 0x80;
    sub_0804D724(arg0);
}

void sub_0804D6CC(Entity4D7 *arg0) {
    if (arg0->unk54 == 0) {
        if (arg0->unkAA != 0) {
            sub_0804BCE0(arg0);
            D_03002AB0[0x61] = arg0->unk61;
            D_030023D4 = arg0->unk2;
            D_030040E0 = arg0->unk6;
        } else {
            sub_0804B9D4(arg0);
        }
    } else {
        arg0->unk54--;
    }
}
