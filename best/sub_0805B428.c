struct Unk3000AE0 {
    u8 pad00[8];
    s32 count;
};

struct Unk2011280 {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    u16 unk4;
    u16 unk6;
};

extern struct Unk3000AE0 D_03000AE0;
extern struct Unk2011280 D_02011280[];

void sub_0805B428(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 i;
    struct Unk2011280 *ptr;

    for (i = 0; i < D_03000AE0.count; i++) {
        ptr = &D_02011280[i];
        if ((ptr->unk0 & 0x1FF) >= arg0 && (ptr->unk0 & 0x1FF) <= arg2 && ptr->unk2 >= arg1 && ptr->unk2 <= arg3) {
            ptr->unk4 |= 0xC00;
        }
    }
}
