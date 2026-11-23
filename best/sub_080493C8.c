extern u8 D_030023E0[];
extern u8 D_0202DBD0[];

typedef struct {
    u8 pad00[0xA4];
    u16 field_A4;
} StateBlock;

u32 sub_08001770(s32 arg0);
void sub_0803EE6C(void *arg0);
void sub_08049C40(void *arg0, s32 arg1, s32 arg2);
extern void sub_08049CC0(void);

void sub_080493C8(void *arg0) {
    void *var_r4 = arg0;
    void *var_r5 = arg0;
    u8 val;

    if (((StateBlock *)D_030023E0)->field_A4 == 1) {
        if ((sub_08001770(0x27) << 24) != 0 && (sub_08001770(0x24) << 24) == 0) {
            ((Entity *)var_r4)->unk64 = (u32)(void (*)(void))sub_08049CC0 | 1;
            sub_08049C40(var_r4, 0xC0, 0x3E);
            return;
        }
        sub_0803EE6C(var_r5);
        return;
    }
    if ((sub_08001770(0x6B) << 24) == 0) {
        ((Entity *)var_r5)->unk64 = (u32)(void (*)(void))sub_08049CC0 | 1;
        sub_08049C40(var_r5, 0xC0, 0x3E);
        return;
    }
    val = *(u8 *)(D_0202DBD0 + 0x2B2);
    if (val == 0 || val == 6) {
        ((Entity *)var_r5)->unk64 = (u32)(void (*)(void))sub_08049CC0 | 1;
        sub_08049C40(var_r5, 0xC0, 0x3E);
        return;
    }
    sub_0803EE6C(var_r5);
}
