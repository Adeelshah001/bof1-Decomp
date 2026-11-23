extern u8 D_03003F98[];
extern u8 D_02022840[];
void sub_0803A8EC(void *);
void sub_080490F4(void *);
void sub_080A0774(void *);
s32 sub_08001770(s32);
void sub_0803828C(void *, void *, u16, u8);
void sub_0804A020(void *);

void sub_0804A048(void *arg0) {
    u8 *entity = arg0;
    u32 temp;
    
    sub_0803828C(arg0, entity + 4, *(u16 *)(entity + 0x38), entity[0x61]);
    temp = entity[0x54] - 1;
    entity[0x54] = temp;
    if ((temp << 24) == 0) {
        entity[0x54] = 0x3F;
        *(u32 *)(entity + 0x64) = (u32)sub_0804A020;
    }
    if ((sub_08001770(0xDD) << 24) != 0) {
        *(u32 *)(entity + 0x64) = *(u32 *)(entity + 0xDC);
    }
    sub_0803A8EC(arg0);
}
