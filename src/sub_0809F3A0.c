void sub_080A0214(const void *src, void *dst, u32 control);

void sub_0809F3A0(void)
{
    u32 zero;
    u32 *sound = *(u32 **)0x03007FF0;
    u32 magic = *sound;

    if (magic - 0x68736D53 <= 1) {
        *sound = magic + 10;
        if (*(vu32 *)0x040000C4 & 0x02000000) {
            *(vu32 *)0x040000C4 = 0x84400004;
        }
        if (*(vu32 *)0x040000D0 & 0x02000000) {
            *(vu32 *)0x040000D0 = 0x84400004;
        }
        ((vu16 *)0x040000C6)[0] = 0x0400;
        ((vu16 *)0x040000C6)[6] = 0x0400;
        zero = 0;
        sub_080A0214(&zero, sound + 0xD4, 0x05000318);
    }
}
