extern u16 D_020210C2[];
extern u16 D_020212C2[];

typedef struct {
    u8 pad00[0x10];
    vu16 unk10;
} Unk4830;

void sub_0807B2DC(u8 arg0) {
    if (!(((Unk4830 *)D_03004830)->unk10 & 1)) {
        u16 offset = arg0 << 5;
        u16 prev = *(u16 *)((u8 *)D_020210C2 + offset);
        s32 i;
        *(u16 *)((u8 *)D_020210C2 + offset) = *(u16 *)((u8 *)D_020212C2 + offset) = *(u16 *)((u8 *)D_020210C2 + offset + 0x1C);
        i = 0xD;
        do {
            u16 next = *(u16 *)((u8 *)D_020210C2 + offset + 2);
            *(u16 *)((u8 *)D_020210C2 + offset + 2) = *(u16 *)((u8 *)D_020212C2 + offset + 2) = prev;
            offset += 2;
            prev = next;
            i--;
        } while (i >= 0);
    }
}
