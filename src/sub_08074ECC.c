typedef struct {
    u8 pad00[0x2B8];
    u8 unk2B8;
} Unk0202DBD0;

typedef struct {
    u8 pad00[0xA0];
    u8 unkA0;
    u8 padA1[0xA4 - 0xA1];
    u16 unkA4;
} Unk030023E0;

extern Unk0202DBD0 D_0202DBD0;
extern Unk030023E0 D_030023E0;
extern const u8 D_0815153C[];

u8 sub_08001770(u8);
u16 sub_08074F38(void *);
u16 sub_0807505C(void *);

u16 sub_08074ECC(void *arg0) {
    u16 idx;
    u8 temp;

    temp = D_0202DBD0.unk2B8;
    temp &= 6;
    if (temp != 0) {
        return 0;
    }
    idx = D_030023E0.unkA4;
    temp = D_0815153C[idx];
    if (temp == 0 || (temp != 1 && sub_08001770(temp) != 0)) {
        return 0;
    }
    temp = D_030023E0.unkA0;
    if (temp == 0) {
        return sub_08074F38(arg0);
    }
    if (temp == 3) {
        return sub_0807505C(arg0);
    }
    return 0;
}
