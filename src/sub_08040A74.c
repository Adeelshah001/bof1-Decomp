extern u8 D_03001790[];
void *sub_0803ED54(void);

typedef struct {
    u8 pad00[8];
    u16 unk08;
    u8 pad0A[2];
    u16 unk0C;
    u8 pad0E[0x10];
    u8 unk1E;
    u8 pad1F[10];
    u8 unk29;
    u8 pad2A[2];
    u32 unk2C;
} Unk1790Entry;

u8 sub_08040A34(u8 arg1, u8 *arg2) {
    u8 found = 0;
    u8 i;
    for (i = 0; i <= 3; i++) {
        if (D_03001790[i * 0x30 + 0x29] != 0 && D_03001790[i * 0x30 + 0x1E] == arg1) {
            found = 1;
            *arg2 = i;
        }
    }
    return found;
}

void *sub_08040A74(u8 arg0) {
    Unk1790Entry *ent = (Unk1790Entry *)sub_0803ED54();
    if (ent != NULL) {
        ent->unk1E = arg0;
        ent->unk29 = 0;
        ent->unk08 = 0;
        ent->unk0C = 0;
        ent->unk2C = 0;
        ent->unk29 = 1;
    }
    return ent;
}

void sub_08040AA0(void) {
    u8 *base = D_03001790;
    u8 *unk2c_base = D_03001790 + 0x2C;
    u8 i;
    for (i = 0; i <= 3; i++) {
        *(u32 *)(unk2c_base + i * 0x30) = 0;
        base[i * 0x30 + 0x29] = 0;
    }
}
