u8 sub_08027A30(s32, s32, u16, u16);
void sub_080279EC(s32);

u8 sub_080270CC(s32 arg0, u16 arg1, u16 arg2)
{
    return sub_08027A30(0x1A8, 0xE57C, arg1, arg2);
}

u8 sub_080270F4(s32 arg0, u16 arg1, u16 arg2)
{
    return sub_08027A30(0x848, 0xE37C, arg1, arg2);
}

u8 sub_08027120(s32 arg0, u16 arg1, u16 arg2)
{
    return sub_08027A30(0x1BA8, 0xFD4C, arg1, arg2);
}

u8 sub_08027070(s32 arg0, u16 arg1, u16 arg2)
{
    if (arg2 == 0xDC7C) {
        switch (arg1) {
            case 0x118:
            case 0x128:
            case 0x138:
                sub_080279EC(arg0);
                return 1;
            default:
                return sub_08027A30(0x1B8, 0xDC7C, arg1, arg2);
        }
    }
    return 0;
}
