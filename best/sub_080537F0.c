extern const u8 D_0822B3B8[];

void sub_08053784(u8 *arg0)
{
    u8 *p = arg0 + 0xD1;
    if (--*p != 0) {
        u8 v = arg0[0xCA] + 1;
        p -= 5;
        *p = v;
    } else {
        arg0[0xCC]++;
    }
}

void sub_080537F0(u8 *arg0)
{
    if (arg0[0x3B] != 7) {
        u8 val = D_0822B3B8[arg0[0xCC] + 1];
        arg0[0xC9] = val;
    }
    arg0[0xCC] += 2;
}
