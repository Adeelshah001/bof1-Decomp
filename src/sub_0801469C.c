extern u8 D_03002AB0[];
extern u8 D_030036A0[];

void sub_0803EE88(void *);
void sub_0803AF58(s32, s32);
void sub_080017EC(s32);
void sub_0805561C(s32);
void sub_080074D4(void);

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} State2AB0;

void sub_0801469C(void) {
    sub_0803EE88(D_030036A0);
    sub_0803AF58(0xFC, 0xFFFF);
    sub_080017EC(0x87);
    sub_0805561C(0x3D);
    ((State2AB0 *)D_03002AB0)->unk88++;
    sub_080074D4();
    D_03004830[0x2B]++;
}
