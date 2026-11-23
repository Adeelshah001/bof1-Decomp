extern u8 D_03003420[];

s32 sub_080985A4(u8 *entity);
s32 sub_080985E0(void);

s32 sub_080975F0(u8 *arg0)
{
    u8 val;

    if (arg0 >= D_03003420 && arg0 < D_03003420 + 0xB68) {
        goto call_85a4;
    }
    if (arg0[0x114] == 0x84 || (val = arg0[0xEC]) == 0x43 || (val != 0x86 && (val = arg0[0xEE]) == 0x43)) {
        return sub_080985E0();
    }
    if (val != 0x86) {
    call_85a4:
        return sub_080985A4(arg0);
    }
    return 0;
}
