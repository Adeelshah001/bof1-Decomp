extern void (*const D_08153190[])(u8 *);
extern u8 D_03004410[], D_0202DE92[];
extern u16 D_03005000;
extern void sub_08067C50(s32, s32);
extern const u8 *sub_0809B680(u16);

void sub_0809D9D8(void)
{
    D_08153190[D_03004410[0xF]](D_0202DE92);
    sub_08067C50(0xFA, 0x25A);
}

void sub_0809DAD8(void)
{
    if (--D_03005000 == 0) {
        D_03005000 = 30;
        D_03004410[0xF]++;
    }
}

u8 sub_0809D890(u16 message, u8 *buffer)
{
    const u8 *src = sub_0809B680(message);
    u8 *dst = buffer;
    u8 byte;
    u8 len = 0;
    u8 scratch[12];

    do {
        byte = *src;
        *dst = byte;
        src++;
        dst++;
    } while (((u32)byte << 24) != 0);

    if (buffer[0]) {
        do {
            len++;
        } while (len <= 7 && buffer[len]);
    }
    return len;
}

void sub_0809D874(u8 *dst, const u8 *src)
{
    u8 byte;
    while (*dst)
        dst++;
    do {
        byte = *src;
        *dst = byte;
        src++;
        dst++;
    } while (((u32)byte << 24) != 0);
}
