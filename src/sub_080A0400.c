typedef u8 *va_list;

void sub_080A03A0(u8 arg0);
void sub_080A04A0(s32 arg0);
void sub_080A0B1C(u8 *dst, u32 arg1, va_list ap);
void sub_080A0400(u8 *p);
void sub_080A4878(void);

void sub_080A4858(void)
{
    sub_080A4878();
}

void sub_080A0578(void)
{
    sub_080A04A0(0);
}

void sub_080A045C(u8 *dst, ...)
{
    u8 buf[0x100];
    va_list ap;

    ap = (u8 *)&dst + 4;
    sub_080A0B1C(buf, (u32)dst, ap);
    sub_080A0400(buf);
}

void sub_080A0400(u8 *p)
{
    s32 guard = 0x09FE20F8;
    vu16 *reg = (vu16 *)0x04000204;
    u16 saved = *reg;

    *reg = 0x1800;
    while (*p) {
        sub_080A03A0(*p);
        p++;
    }
    *reg = saved;
    (void)guard;
}
