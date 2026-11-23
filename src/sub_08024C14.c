typedef struct {
    u8 pad00[0x20];
    union {
        u16 half;
        u32 word;
    } unk20;
} Unk0202DBD0;

typedef struct {
    u8 pad00[0x38];
    u16 unk38;
} Unk030045B0;

extern Unk0202DBD0 D_0202DBD0;
extern u8 D_03002AB0[];
extern Unk030045B0 D_030045B0;

void sub_08024C64(void);
u8 sub_0805C9B8(void *, s32);

void sub_08024C14(void) {
    if (sub_0805C9B8(D_03002AB0, 0xC8) == 0) {
        if (D_0202DBD0.unk20.half == 0) {
            D_030045B0.unk38 = 0x8292;
        }
        D_0202DBD0.unk20.word &= 0xFFFF0000;
    }
    D_03004830[0x40]++;
    sub_08024C64();
}
