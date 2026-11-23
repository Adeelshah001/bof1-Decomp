extern void (*const D_08153190[])(u8 *);
extern u8 D_03004410[], D_0202DE92[];
extern u16 D_03005000;
extern void sub_08067C50(s32, s32);
extern const char *sub_0809B680(u16);

void sub_0809D9D8(void)
{
    D_08153190[D_03004410[0xF]](D_0202DE92);
    sub_08067C50(0xFA, 0x25A);
}

void sub_0809DAD8(void)
{
    u16 *timer = (u16 *)0x03005000;
    if (--*timer == 0) {
        u8 *state;
        *timer = 30;
        state = (u8 *)0x03004410;
        state[0xF]++;
    }
}

u8 sub_0809D890(u16 message, char *buffer)
{
    u8 scratch[12];
    const char *src;
    char *dst;
    char byte;
    u8 len;

    src = sub_0809B680(message);
    dst = buffer;
    if ((*dst++ = *src++) != 0) {
    copy:
        if ((*dst++ = *src++) != 0)
            goto copy;
    }
    len = 0;
    if (*buffer) {
        do {
            len++;
        } while (len <= 7 && buffer[len]);
    }
    return len;
}

void sub_0809D874(char *dst, const char *src)
{
    char byte;
    while (*dst != 0)
        ++dst;
    do {
        byte = (*dst++ = *src++);
    } while (byte != 0);
}
