typedef struct {
    u8 unk00;
    u8 pad01[7];
    u16 *unk08;
} Struct03004790;

void sub_0805C458(void);
void sub_080620B0(void);

void sub_08062030(void)
{
    u32 i;
    s32 cnt;

    for (i = 0; i < 0xD8; i++) {
        ((u8 *)0x03004620)[i] = 0;
    }
    for (i = 0; i < 0x28; i++) {
        ((u8 *)0x03004760)[i] = 0;
    }
    {
        u16 val = 0x8100;
        u16 *p = (u16 *)0x02024650;
        cnt = 0x2400;
        do {
            *p++ = val;
        } while (--cnt != 0);
    }
    {
        u8 zero = 0;
        u32 p = 0x02024650;
        Struct03004790 *s = (Struct03004790 *)0x03004790;
        u32 step = 0x800;
        cnt = 8;
        do {
            s->unk00 = zero;
            s->unk08 = (u16 *)p;
            p += step;
            s++;
        } while (--cnt >= 0);
    }

    if (D_030023D0[0] == 2) {
        sub_0805C458();
    } else {
        sub_080620B0();
    }
}
