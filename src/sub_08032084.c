extern u8 D_030043BC;
extern const u8 D_082209BA[];
extern const u8 D_082209BC[];
extern u16 D_03004114;
extern u8 D_030023E0[];
extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0x88];
    const u8 *unk88;
} Unk08031594;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

typedef struct {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
} Unk080320C8;

typedef struct {
    u8 pad00[0x204];
    u16 unk204[0x14B];
    u16 unk49A[1];
} Unk0202DBD0;

u8 sub_08001770(s32);
void sub_080325B0(void *);
u8 sub_0805CF40(u16, u16 *);

void sub_08031594(Unk08031594 *arg0) {
    const u8 *p = arg0->unk88;
    u32 offset = p[1] | (p[2] << 8);
    if (D_030043BC == 2) {
        arg0->unk88 = D_082209BA + 1 + offset;
    } else if (D_030043BC == 1) {
        arg0->unk88 = D_082209BC + offset;
    }
}

void sub_08032084(void *arg0) {
    D_03004114 = 0;
    if ((((Unk030023E0 *)D_030023E0)->unkA4 == 0x187 || ((Unk030023E0 *)D_030023E0)->unkA4 == 0) && sub_08001770(0x1D)) {
        D_03004114 = 1;
        sub_080325B0(arg0);
    }
}

void sub_080320C8(Unk080320C8 *arg0) {
    u16 sp0;
    s32 zero = 0;
    D_03004114 = zero;
    if (((Unk030023E0 *)D_030023E0)->unkA4 == 0x11F && sub_0805CF40(0x15B, &sp0) == 0) {
        arg0->unk4D = 4;
        arg0->unk50 = zero;
        D_03004114 = 1;
    }
}

void sub_08030960(u16 arg0) {
    u16 sp0;
    u16 *arr = ((Unk0202DBD0 *)D_0202DBD0)->unk49A;
    u8 status;

    arr[0]++;
    arr[arr[0]] = arg0;
    status = sub_0805CF40(arg0, &sp0);
    if (status == 0) {
        u16 *slot = &((Unk0202DBD0 *)D_0202DBD0)->unk204[sp0];
        if (*slot == arg0) {
            *slot = status;
        }
    }
}
