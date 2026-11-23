extern void sub_0807B2BC(void *);
extern void sub_08083484(void *);
extern void sub_08086C54(u8 *);
extern void sub_08086C78(u8 *);
void sub_08086C14(u8 *object) {
    u8 code;
    sub_0807B2BC(object);
    code = *(u16 *)(object + 0x24);
    if ((u32)code > 5) {
        if (code == 6) {
            sub_08086C54(object);
        } else if (code == 12) {
            sub_08083484(object);
            object[0x4D] = 10;
            sub_08086C78(object);
        }
    }
}
