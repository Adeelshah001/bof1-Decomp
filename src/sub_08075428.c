s32 sub_0807545C(u8);
s32 sub_08075474(u8);
s32 sub_08075488(void);
s32 sub_080754B4(void);

u8 sub_08075428(u8 arg0) {
    s32 ret;
    if (sub_08075488() != 0) {
        ret = sub_0807545C(arg0);
    } else if (sub_080754B4() != 0) {
        ret = sub_08075474(arg0);
    } else {
        return arg0;
    }
    return ret;
}
