extern u8 D_03004E38;
extern void (*const D_080FBB58[])(void);

void sub_08044038(void) {
    D_080FBB58[D_03004E38 ? D_03004E38 : 0]();
}
