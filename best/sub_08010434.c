typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
} Unk03002430;

typedef struct {
    u8 pad00[0x42];
    u16 unk42;
} Unk030045B0;

extern Unk03002430 D_03002430;
extern Unk030045B0 D_030045B0;

void sub_08010434(s16 arg0) {
    u32 temp;

    D_03002430.unk2 = arg0;
    temp = D_030045B0.unk42;
    if (!(temp & 4)) {
        D_03002430.unk6--;
    }
    D_030045B0.unk42 = temp + 1;
}
