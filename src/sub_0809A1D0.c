extern void sub_08037FC4(void *arg0, s32 arg1);
extern s32 sub_0807B2CC(void *arg0);
extern void sub_0809A1B4(void *arg0);

void sub_0809A1D0(void *arg0) {
    u8 *data;
    u8 *p;
    data = (u8 *)arg0;
    p = &data[0x4C];
    if (*p != 0) {
        if ((sub_0807B2CC(arg0) << 16) == 0) {
            sub_0809A1B4(arg0);
        }
    } else {
        *p = *p + 1;
        sub_08037FC4(arg0, 8);
    }
}
