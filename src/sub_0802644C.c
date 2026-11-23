extern u8 D_030023E0[];
extern u16 D_03004114;
u8 sub_08023314(void);
u8 sub_08023374(void);

typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} Struct_030023E0;

u8 sub_0802644C(void) {
    u8 result;
    if (((Struct_030023E0 *)D_030023E0)->unkA8 != 0xB4) {
        D_03004114 = result = sub_08023374();
    } else {
        D_03004114 = result = sub_08023314();
    }
    return result;
}
