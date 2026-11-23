extern u16 D_03004114;
extern s32 sub_08001770(s32);
extern s32 sub_08027B44(void *, u16, u16);
extern s32 sub_08027BBC(void *, u16, u16);

s32 sub_08026748(void *arg0) {
    D_03004114 = 0;
    if ((sub_08001770(0xD6) << 24) != 0) {
        if (*(u16 *)((u8 *)arg0 + 2) == 0x268) {
            sub_08027B44(arg0, *(u16 *)((u8 *)arg0 + 2), *(u16 *)((u8 *)arg0 + 6));
        } else if (*(u16 *)((u8 *)arg0 + 2) == 0x278) {
            sub_08027BBC(arg0, *(u16 *)((u8 *)arg0 + 2), *(u16 *)((u8 *)arg0 + 6));
        }
    }
    return 0;
}
